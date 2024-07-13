#include <stdio.h>

/**
 * main - prints the number of args passed into it
 *
 * @argc: num of command line arg
 * @argv: array containing the program command line
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
