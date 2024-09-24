#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 *             including the terminating null byte (\0)
 *
 * @dest: char type string
 * @src: char type string
 *
 * Return: ponts to dest
 */
char *_strcpy(char *dest, char *src)
{
	int d = -1;

	do {
		d++;
		dest[d] = src[d];
	} while (src[d] != '\0');
	return (dest);
}
