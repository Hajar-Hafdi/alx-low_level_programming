#include "main.h"

/**
 * print_line - function that prints a straight line
 *
 * @n: number of time _ char is printed
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
			_putchar('_');
		_putchar('\n');
	}
}
