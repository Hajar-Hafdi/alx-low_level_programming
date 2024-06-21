#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for loop and putchar function to display alphabtes.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int letter, LETTER;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}
	for (LETTER = 65; LETTER <= 90; LETTER++)
	{
		putchar(LETTER);
	}
	putchar('\n');
	return (0);
}
