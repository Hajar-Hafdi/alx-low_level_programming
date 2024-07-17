#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **a, u, j;

	a = malloc(sizeof(*a) * height);

	if (width <= 0 || height <= 0 || a == 0)
	{
		return (NULL);
	}
	else
	{

		for (u = 0; u < height; u++)
		{
			a[u] = malloc(sizeof(**a) * width);
			if (a[u] == 0)
			{
				while (u--)
					free(a[u]);
				free(a);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				a[u][j] = 0;
		}
	}
	return (a);
}
