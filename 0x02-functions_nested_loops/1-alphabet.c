#include "main.h"

/**
 * print_alphabet - uses the _putchar function to print the
 *                 alphabets a - z  
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
