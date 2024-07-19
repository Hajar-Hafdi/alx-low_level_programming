#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: usigned int
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
