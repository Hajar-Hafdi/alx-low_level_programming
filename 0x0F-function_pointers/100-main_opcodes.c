#include "function-pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: numb of arguments
 * @argv: arg vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char *a = (char *)main;
	int c;

	if (argc != 2)
		printf("Error\n"), exit(1);
	c = atoi(argv[1]);
	if (c < 0)
		printf("Error\n"), exit(2);
	while (c--)
		printf("%02hhx%s", *a++, c ? " " : "\n");
	return (0);
}
