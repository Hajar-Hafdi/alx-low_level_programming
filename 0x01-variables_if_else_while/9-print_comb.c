#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for loop and putchar function to print numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		if (number != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
