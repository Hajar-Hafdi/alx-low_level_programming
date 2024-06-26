#include "main.h"

/**
 * print_sign - checks if n is positive negative or 0
 *
 * @n : checks input of function
 *
 * Return: return 1 if n is greater than 0
 *         return 0 if n equals 0
 *         return -1 if n is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
