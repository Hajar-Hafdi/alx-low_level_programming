#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for and if loop and putchar to print 3 digit nums.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int fd, sd, td;

	for (fd = 48; fd <= 57; fd++)
	{
		for (sd = fd + 1; sd <= 57; sd++)
		{
			for (td = sd + 1; td <= 57; td++)
			{
				putchar(fd);
				putchar(sd);
				putchar(td);
				if (fd != 55 || sd != 56 || td != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
