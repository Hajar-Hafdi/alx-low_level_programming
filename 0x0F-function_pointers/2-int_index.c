#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: int array
 * @size: size of array
 * @cmp: the compare function
 *
 * Return: the int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u = 0;

	if (array && size && cmp)
		while (u < size)
		{
			if (cmp(array[u]))
				return (u);
			u++;
		}
	return (-1);
}
