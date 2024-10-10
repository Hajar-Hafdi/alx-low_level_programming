#include "hash_tables.h"

/**
 * hash_table_get -  that prints a hash table
 *
 * @ht: ptr to hash table
 * @key: key to get the val of
 *
 * Return: If ht is NULL, don’t print anything
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	nd = ht->array[idx];
	while (nd && strcmp(nd->key, key) != 0)
		nd = nd->next;

	return ((nd == NULL) ? NULL : nd->value);
}
