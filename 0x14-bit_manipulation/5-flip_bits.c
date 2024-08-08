#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 *             flip to get from one number to another
 *
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xval = n ^ m;
	unsigned int counting = 0;

	while (xval)
	{
		if (xval & 1ul)
			counting++;
		xval = xval >> 1;
	}
	return (counting);
}
