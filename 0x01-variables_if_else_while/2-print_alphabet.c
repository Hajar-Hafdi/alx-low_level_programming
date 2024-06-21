#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for loop and putchar function to display alphabets.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

