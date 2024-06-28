#include "main.h"

/**
 * print_numbers - function prints numbers 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int number = 0;

	do {
		_putchar(number + 48);
		number++;
	} while (number >= 0 && number <= 9);
	_putchar('\n');
}
