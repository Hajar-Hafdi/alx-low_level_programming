#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n is a prime number
 *
 * @oth: int
 * @n: int
 *
 * Return: returns 0 or 1
 */
int veri_prime(int n, int oth);
int is_prime_number(int n)
{
	return (veri_prime(n, 2));
}
/**
 * veri_prime - check all numbers < n if they can divide it
 *
 * @n: int
 * @oth: int
 *
 * Return: int
 */
int veri_prime(int n, int oth)
{
	if (oth >= n && n > 1)
		return (1);
	else if (n % oth == 0 || n <= 1)
		return (0);
	else
		return (veri_prime(n, oth + 1));
}
