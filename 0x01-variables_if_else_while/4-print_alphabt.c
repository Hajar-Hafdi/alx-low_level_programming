#include <stdio.h>

/**
 * main - Empty point
 *
 * Description: using for and if loop to print alphabets except for q and e.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
