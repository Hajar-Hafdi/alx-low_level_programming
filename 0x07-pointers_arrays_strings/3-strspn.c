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
	unsigned int uns, nt;

	for (uns = 0; s[uns] != '\0'; uns++)
	{
		for (nt = 0; accept[nt] != s[nt]; nt++)
		{
			if (s[uns] == accept[nt])
				break;
		}
			if (accept[nt] == '\0')
				return (uns);
		}
	}
	return (uns);
}
