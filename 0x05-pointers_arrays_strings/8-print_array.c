#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @n: element input
 * @a: char input
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		if (d != (n - 1))
			printf("%d, ", a[d]);
		else
			printf("%d", a[d]);
	}
	printf("\n");
}
