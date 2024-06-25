#include "main.h"

/**
 * print_alphabet_x10 - uses _putchar function to print
 *                       alphabets in lowercase x10.
*/
void print_alphabet_x10(void)
{
	int letter, time;

	for (time = 0; time <= 9; time++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
