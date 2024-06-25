#include "main.h"

/**
 * print_alphabet - helper function that prints alphabets in lowercase.
 *
 * using print_alphabet and putchar to print lower case alphabets.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
