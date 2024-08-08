#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: the bin ber str
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ber = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		ber = ber * 2 + (*b++ - '0');
	}
	return (ber);
}
