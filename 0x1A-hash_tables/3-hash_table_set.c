#include "hash_tables.h"

/**
 * hash_table_set - Add element in a hash table
 *
 * @ht: ptr  hash table.
 * @key: key to add not an empty str
 * @value: val of  key
 *
 * Return: returns  0 if failure
 *         Otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	char *val_copy;
	unsigned long int indx, u;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	for (u = indx; ht->array[u]; u++)
	{
		if (strcmp(ht->array[u]->key, key) == 0)
		{
			free(ht->array[u]->value);
			ht->array[u]->value = val_copy;
			return (1);
		}
	}

	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(val_copy);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = val_copy;
	nw->next = ht->array[indx];
	ht->array[indx] = nw;

	return (1);
}
