#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}
	return (0);
}
