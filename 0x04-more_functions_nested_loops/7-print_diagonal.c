#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: is the number of times \ char is printed
 */
void print_diagonal(int n)
{
	int p, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p < n; p++)
		{
			for (sp = 0; sp < p; sp++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
