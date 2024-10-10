#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 *
 * @key: key to get index of
 * @size: size of array of the hash table
 *
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
