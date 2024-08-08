#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 *
 * @n: num to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, prtd = 0;

	while (b)
	{
		if (n & 1L << --b)

		{
			_putchar('1');
			prtd++;
		}
		else if (prtd)
			_putchar('0');
	}
	if (!prtd)
		_putchar('0');
}
