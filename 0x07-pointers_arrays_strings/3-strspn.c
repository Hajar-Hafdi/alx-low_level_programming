#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: byte
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int uns, int;

	for (uns = 0; s[uns] != '\0'; uns++)
	{
		for (int = 0; accept[int] != s[int]; int++)
		{
			if (accept[int] == '\0')
				return (uns);
		}
	}
	return (uns);
}
