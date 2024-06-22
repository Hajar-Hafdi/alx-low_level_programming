#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for loop if loop and putchar function to print
 *              all possible double digits without repetition
 * Return: Always 0 (Success)
*/
int main(void)
{
	int fd, sd;

	for (fd = 48; fd <= 57; fd++)
	{
		for (sd = fd + 1; sd <= 57; sd++)
		{
			putchar(fd);
			putchar(sd);
			if (fd != 56 || sd != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
