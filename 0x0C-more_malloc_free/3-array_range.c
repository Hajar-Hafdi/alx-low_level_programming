#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: starting int
 * @max: max int
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int ln, u;
	int *ptrr;

	if (min > max)
		return (NULL);
	ln = max - min + 1;
	ptrr = malloc(sizeof(int) * ln);
	if (!ptrr)
		return (NULL);
	for (u = 0; u < ln; u++)
		ptrr[u] = min++;
	return (ptrr);
}

