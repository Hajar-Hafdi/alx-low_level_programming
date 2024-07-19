#include "main.h"
#include <stdlib.h>

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: pointer to string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int u = 0;

	while (str[u])
	{
		_putchar(str[u]);
		u++;
	}
}
/**
 * _atoi - convert a string to an int
 *
 * @s: char type string
 *
 * Return: converted integer
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstnumb, u;

	for (firstnumb = 0; !(s[firstnumb] >= 48 && s[firstnumb] <= 57); firstnumb++)
	{
		if (s[firstnumb] == '-')
		{
			sign *= -1;
		}
	}
	for (u = firstnumb; s[u] >= 48 && s[u] <= 57; u++)
	{
		resp *= 10;
		resp += (s[u] - 48);
	}
	return (sign * resp);
}
/**
 * print_int - prints integer
 *
 * @n: int
 *
 * Return: void
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, u, ressp;

	for (u = 0; n / divisor > 9; u++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		ressp = n / divisor;
		_putchar('0' + ressp);
	}
}
/**
 * main - print the result of the multiplication
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
