#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: the num of args
 * @argv: array of pointers to args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sm = 0;
	char *cc;

	while (--argc)
	{
		for (c = argv[argc]; *cc; cc++)
			if (*cc < '0' || *cc > '9')
				return (printf("Error\n"), 1);
		sm += atoi(argv[argc]);
	}
	printf("%d\n", sm);
	return (0);
}
