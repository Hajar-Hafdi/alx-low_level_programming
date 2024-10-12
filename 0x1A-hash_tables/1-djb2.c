#include "hash_tables.h"


/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 *
 * @str:  str to hsh
 *
 * Return: The calculated hsh
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int b;

	hsh = 5381;
	while ((b = *str++))
		hsh = ((hsh << 5) + hsh) + b;

	return (hsh);
}
