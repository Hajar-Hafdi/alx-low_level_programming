#include "main.h"

/**
 * *create_array - creates ana array of chars
 *
 * @size: size of array
 * @c: char to initialize
 *
 * Return: pointer to array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *d = malloc(size);

	if (size == 0 || d == 0)
		return (0);
	while (size--)
		d[size] = c;
	return (n);
}
