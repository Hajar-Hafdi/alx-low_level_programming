#include "main.h"
#include <stdlib.h>

/**
 * _memst - fills memory with byte
 *
 * @s: pointer
 * @b: constant
 * @n: max bytes to be used
 *
 * Return: s
 */
char *_memst(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *_calloc - allocates mem for an array using malloc
 *
 * @nmemb: array legth
 * @size: size of each elemnt
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *w;

	if (size == 0 || nmemb == 0)
		return (NULL);
	w = malloc(sizeof(int) * nmemb);
	if (w == 0)
		return (NULL);
	_memst(w, 0, sizeof(int) * nmemb);
	return (w);
}


