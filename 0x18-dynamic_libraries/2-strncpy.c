#include "main.h"

/**
 * *_strncpy - copies a string.
 *
 * @dest: pointer to destination input
 * @src: pointer to source
 * @n: bytes of @src
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[p] = src[p];
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
