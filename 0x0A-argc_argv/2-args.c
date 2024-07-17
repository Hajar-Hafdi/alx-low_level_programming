#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int u = 0;

	while (argc--)
	{
		printf("%s\n", argv[u]);
		u++;
	}
	return (0);
}

