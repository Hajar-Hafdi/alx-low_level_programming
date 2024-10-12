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
	hash_table_t *hed = ht;
	hash_node_t *nod, *tp;
	unsigned long int u;
	if (ht == NULL)
		return;

	for (u = 0; u < ht->size; u++)
	{
		nod = ht->array[u];
		while (nod != NULL)
		{
			tp = nod->next;
			free(nod->key);
			free(nod->value);
			free(nod);
			nod = tp;
		}
	}
	free(ht->array);
	free(ht);
}
