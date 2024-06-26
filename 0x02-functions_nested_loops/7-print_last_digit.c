#include "main.h"

/**
 * print_last_digit - function that prints last digit of any given number
 *
 * @number: the int whos value to be valued
 *
 * Return: The value of the last digit
 */
int print_last_digit(int number)
{
	int lastdig;

	lastdig = number % 10;

	if (lastdig < 0)
	{
		return (-lastdig);
	}
	_putchar(lastdig + '0');
	return (lastdig);
}
