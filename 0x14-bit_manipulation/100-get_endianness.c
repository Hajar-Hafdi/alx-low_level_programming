#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if small, 0 if big
 */
int get_endianness(void)
{
	unsigned long int s = 1;

	return (*(char *)&s);
}
