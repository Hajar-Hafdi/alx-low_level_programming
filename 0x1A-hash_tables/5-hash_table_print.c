#include "hash_tables.h"

/**
 * hash_table_print - outputs hash table
 *
 * @ht: ptr to the hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int u;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (u = 0; u < ht->size; u++)
	{
		if (ht->array[u] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			nd = ht->array[u];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
