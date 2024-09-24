#include "main.h"

/**
 * *_strncat -  concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: num of bytes from @src
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, i;

	d = 0;

	while (dest[d])
		d++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d + i] = src[i];
	dest[d + i] = '\0';
	return (dest);
}
