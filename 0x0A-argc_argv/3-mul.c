#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: num of command line args
 * @argv: pointer to an array of cmmd line
 *
 * Return: 0 (Success), fail otherwise
 */
int main(int argc, char *argv[])
{
	int sm;

	if (argc == 3)
	{
		sm = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sm);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

