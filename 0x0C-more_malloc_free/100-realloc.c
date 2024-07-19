#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free.
 *
 * Description: reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to memo allocated with old_size
 * @old_size: size in bytes of the allocated sppace for ptr
 * @new_size: size in bytes of the new memo black
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *d = NULL;
	unsigned int u;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		d = malloc(new_size);
		if (d == NULL)
			return (NULL);
		return (d);
	}
	if (new_size > old_size)
	{
		d = malloc(new_size);
		if (d == NULL)
			return (NULL);
		for (u = 0; u < old_size && u < new_size; u++)
			*((char *)d + u) = *((char *)ptr + u);
		free(ptr);
	}
	return (d);
}
