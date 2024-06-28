#include "main.h"

/**
 * print_numbers - function prints numbers 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int number = 0;

	for (number >= 48; number <= 57; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
