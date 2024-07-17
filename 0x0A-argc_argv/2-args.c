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
	for (int u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}
	return (0);
}
