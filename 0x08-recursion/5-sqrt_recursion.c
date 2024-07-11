#include "main.h"

/**
 * _sqrt_recursion - function that finds square root
 *
 *@n: int, num to find square root of
 *
 * Return: int, the square root or -1 if doesn't fine one
 */
int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}
/**
 * _square - helper function to find square root
 *
 * @n: int, number to find square root of
 * @value: int, the current value
 *
 * Return: returns int, the square root or -1 if doesn't fine one
 */
int _square(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (_square(n, value + 1));
	else
		return (-1);
}
