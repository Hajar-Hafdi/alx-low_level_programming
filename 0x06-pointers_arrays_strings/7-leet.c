#include "main.h"

/**
 * *leet - encodes a string into 1337
 *
 * @c: string
 *
 * Return: string that is encoded
 */
char *leet(char *c)
{
	char *cp = c;
	char ky[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int d;

	while (*c)
	{
		for (d = 0; d < sizeof(ky) / sizeof(char); d++)
		{
			if (*c == ky[d] || *c == ky[d] + 32)
			{
				*c = 48 + val[d];
			}
		}
		c++;
	}
	return (cp);
}
