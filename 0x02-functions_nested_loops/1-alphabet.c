#include <stdio.h>

/**
 * print_alphabet: prints alphabet
 *
 * Description: using putchar to print alphabets in lower case.
 *
 * Return: Always 0 (Success)
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
