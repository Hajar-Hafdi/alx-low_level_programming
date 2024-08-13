#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - entry program
 *
 * @arc: arg count
 * @arv: argument vector
 *
 * Return: return 1 if Succesfully, 0 otherwise
 */
int main(int arc, char **arv)
{
	int frm_f = 0, to_f = 0;
	ssize_t d;
	char buffer[READ_BUF_SIZE];

	if (arc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	frm_f = open(arv[1], O_RDONLY);
	if (frm_f == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, arv[1]), exit(98);
	to_f = open(arv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_f == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, arv[2]), exit(99);
	while ((d = read(frm_f, buffer, READ_BUF_SIZE)) > 0)
		if (write(to_f, buffer, d) != d)
			dprintf(STDERR_FILENO, ERR_NOWRITE, arv[2]), exit(99);
	if (d == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, arv[1]), exit(98);
	frm_f = close(frm_f);
	to_f = close(to_f);
	if (frm_f)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, frm_f), exit(100);
	if (to_f)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, frm_f), exit(100);
	return (EXIT_SUCCESS);
}
