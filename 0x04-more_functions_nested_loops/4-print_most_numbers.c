#include "main.h"

/**
 * print_most_numbers - function uses _putchar to print 0 to 9
 *                      except for 2 and 4
 * Return: void
*/
void print_most_numbers(void)
{
	int ber;

	for (ber = 0; ber <= 9; ber++)
	{
		if (ber == 2 || ber == 4)
			continue;
		_putchar(ber + 48);
	}
	_putchar('\n');
}
