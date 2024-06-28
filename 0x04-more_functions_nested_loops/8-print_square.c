#include "main.h"

/**
 * print_square - function that prints a squre using # char
 *
 * @size: is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int line, col;

	for (line = 1; line <= size; line++)
	{
		for (col = 1; col <= size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
