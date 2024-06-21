#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for to display numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
