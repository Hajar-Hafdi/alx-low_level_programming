#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer to the constant
 * @b: constant
 * @n: bytess to use
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int unint;

	for (unint = 0; n > 0; unint++, n--)
	{
		s[unint] = b;
	}
	return (s);
}
