#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
