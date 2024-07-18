#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: pointer to constant
 * @c: constant
 *
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0' ; t++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}
	return ('\0');
}
