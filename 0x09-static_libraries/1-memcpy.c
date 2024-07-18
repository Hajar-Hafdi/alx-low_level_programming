#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: length of src to copy
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int unsint;

	for (unsint = 0; unsint < n; unsint++)
	{
		dest[unsint] = src[unsint];
	}
	return (dest);
}
