#include "hash_tables.h"

/**
 * hash_table_create - makes a hash table
 *
 * @size: size of the array
 *
 * Return: return NULL if error
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hst;
	unsigned long int u;

	hst = malloc(sizeof(hash_table_t));
	if (hst == NULL)
		return (NULL);

	hst->size = size;
	hst->array = malloc(sizeof(hash_node_t *) * size);
	if (hst->array == NULL)
		return (NULL);
	for (u = 0; u < size; u++)
		hst->array[u] = NULL;

	return (hst);
}
