#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array of int
 * @n: numb of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int f, j, k;

	for (f = 0, j = (n - 1); f < j; f++, j--)
	{
		k = a[f];
		a[f] = a[j];
		a[j] = k;
	}
}
