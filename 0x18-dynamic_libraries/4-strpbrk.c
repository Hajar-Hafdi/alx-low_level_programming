#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string to match
 *
 * Return: pointer to the byte in s that matches one byte from accept
 *         NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *d;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				d = &s[i];
				return (d);
			}
			j++;
		}
		i++;
	}
	return (0);
}
