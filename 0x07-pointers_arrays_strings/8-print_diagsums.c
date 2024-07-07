#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 *                  a square matrix of integers
 *
 * @a: 2D array of int types
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, z1 = 0, z2 = 0;

	for (i = 0; i < size; i++)
	{
		z1 += a[i];
		z2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", z1);
	printf("%d\n", z2);
}
