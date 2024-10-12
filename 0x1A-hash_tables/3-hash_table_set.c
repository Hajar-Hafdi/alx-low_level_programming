#include "hash_tables.h"

/**
 * make_hsh_nd - creates new hash nd
 *
 * @key: key for nod
 * @value: value of the nd
 *
 * Return: new nd, NULL otherwise
 */
hash_node_t *make_hsh_nd(const char *key, const char *value)
{
	hash_node_t *nd;

	nd = malloc(sizeof(hash_node_t));
	if (nd == NULL)
		return (NULL);
	nd->key = strdup(key);
	if (nd == NULL)
		return (NULL);
	nd->key = strdup(key);
	if (nd->key == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->value = strdup(value);
	if (nd->value == NULL)
	{
		free(nd->key);
		free(nd);
		return (NULL);
	}
	nd->next = NULL;
	return (nd);
}

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
	hash_node_t *h_node, *tp;
	char *nval;
	unsigned long int indx;

	if (ht == NULL || ht->array == NULL || ht->size == NULL ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[indx];
	while (tp != NULL)
	{
		if (strcmp(tp->key, key) == 0)
		{
			nval = strdup(value);
			if (nval == NULL)
				return (0);
			free(tp->value);
			tp->value = nval;
			return (1);
		}
		tp = tp->next;
	}
	h_node = make_hsh_nd(key, value);
	if (h_node == NULL)
		return (0);
	h_node->next = ht->array[indx];
	ht->array[indx] = h_node;
	return (1);
}
