#include "main.h"

/**
 * _puts - a function that prints a string to stdout
 *
 * @str: string parametre to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
