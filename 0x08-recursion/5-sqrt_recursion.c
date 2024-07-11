#include "main.h"

/**
 * _sqrt_helper - function helps finding square root recursively
 *
 * @n: number to find square root of
 * @i: the current guess
 *
 * Return: returns natural square root if found, -1 if not.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + i));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find square root of
 *
 * Return: returns natural square root of n
 *         returns -1 if n doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
