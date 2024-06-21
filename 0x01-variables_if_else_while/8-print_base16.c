#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for to pring letters and numbers followed by \n.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char number, letter;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	for (letter = 97; letter <= 102; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
