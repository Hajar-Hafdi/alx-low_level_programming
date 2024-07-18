#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int d, d2;

	d = 0;
	while (dest[d])
		d++;
	for (d2 = 0; src[d2] ; d2++)
		dest[d++] = src[d2];
	return (dest);
}

