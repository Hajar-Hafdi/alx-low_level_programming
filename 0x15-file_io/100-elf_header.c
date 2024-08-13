#include "main.h"
#include <elf.h>

void output_more_osabi(Elf64_Ehdr h);

/**
 * output_magic - prints ELF byts
 *
 * @h:elf header strct
 */
void output_magic(Elf64_Ehdr h)
{
	int u;

	printf(" Magic: ");
	for (u = 0; u < EI_NIDENT; u++)
		printf("%2.2x%s", h.e_ident[u], u == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * output_class - prints the class OF ELF
 *
 * @h: header struct of elff
 */
void output_class(Elf64_Ehdr h)
{
	printf("  Class:                               ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * output_data - printd elf dataa
 *
 * @h: header struct of elf
 */
void output_data(Elf64_Ehdr h)
{
	printf(" Data:                               ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * output_version - parse version of elf
 *
 * @h: header struct of elf
 */
void output_version(Elf64_Ehdr h)
{
	printf(" Version:                     %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
			break;
	}
	printf("\n");
}
/**
 * output_osabi - parse  osabi of elf
 *
 * @h: header strct of elf
 */
void output_osabi(Elf64_Ehdr h)
{
	printf(" OS/ABI:                                   ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX -NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("Unix - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRUE64");
			break;
		default:
			output_more_osabi(h);
			break;
	}
	printf("\n");
}
/**
 * output_more_osabi - parses more osabi elf
 *
 * @h: header struct of elf
 */
void output_more_osabi(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}
/**
 * output_abiversion - parses ABI version of elf
 *
 * @h: header struct of elf
 */
void output_abiversion(Elf64_Ehdr h)
{
	printf(" ABI Version:                 %d\n", h.e_ident[EI_ABIVERSION]);
}
/**
 * output_type - shows the elf type
 *
 * @h: header struct
 */
void output_type(Elf64_Ehdr h)
{
	char *c = (char *)&h.e_type;
	int u = 0;

	printf(" Type:                             ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		u = 1;
	switch (c[u])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", c[u]);
			break;
	}
	printf("\n");
}
/**
 * output_entry - parses the netry point if elf
 *
 * @h: header struct
 */
void output_entry(Elf64_Ehdr h)
{
	int u = 0; int lng = 0;
	unsigned char *c = (unsigned char *)&h.e_entry;

	printf(" Entry point adress:                            0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		u = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!c[u])
			u--;
		printf("%x", c[u--]);
		for (; u >= 0; u--)
			printf("%02x", c[u]);
		printf("\n");
	}
	else
	{
		u = 0;
		lng = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!c[u])
			u++;
		printf("%x", c[u++]);
		for (; u <= lng; u++)
			printf("%02x", c[u]);
		printf("\n");
	}
}
/**
 * main - runnig progrm
 *
 * @arc: arg count
 * @arv: arg vector
 *
 * Return: return 1 if succesful, 0 otherwise
 */
int main(int arc, char **arv)
{
	int f;
	Elf64_Ehdr h;
	ssize_t d;

	if (arc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	f = open(arv[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", arv[1]), exit(98);
	d = read(f, &h, sizeof(h));
	if (d < 1 || d != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", arv[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E'
			&& h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", arv[1]), exit(98);

	output_magic(h);
	output_class(h);
	output_data(h);
	output_version(h);
	output_osabi(h);
	output_abiversion(h);
	output_type(h);
	output_entry(h);
	if (close(f))
	{
		dprintf(STDERR_FILENO, "Error closing file description: %d\n", f);
		exit(98);
	}
	return (EXIT_SUCCESS);
}
