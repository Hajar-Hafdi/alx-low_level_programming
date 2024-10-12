#include "hash_tables.h"

/**
 * hash_table_delete - pops hash table
 *
 * @ht: ptr to a hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int u;
	hash_node_t *nx;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (u = 0; u < ht->size; u++)
	{
		while (ht->array[u] != NULL)
		{
			nx = ht->array[u]->nx;
			free(ht->array[u]->key);
			free(ht->array[u]->value);
			free(ht->array[u]);
			ht->array[u] = nx;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
