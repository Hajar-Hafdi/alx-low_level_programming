#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for and if loop and putchar to display 4 digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int fd, sd;

	for (fd = 0; fd <= 99; fd++)
	{
		for (sd = fd + 1; sd <= 99; sd++)
		{
			putchar((fd / 10) + '0');
			putchar((fd % 10) + '0');
			putchar(' ');
			putchar((sd / 10) + '0');
			putchar((sd % 10) + '0');
			if (fd != 98 || sd != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
