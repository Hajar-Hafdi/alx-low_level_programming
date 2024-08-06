#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: addrss of ptr to 1st nd
 * @idx: index
 * @n: value of newnode
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd, *n_node = malloc(sizeof(listint_t));
	unsigned int u = 0;

	if (!head || !n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	nd = *head;
	while (nd)
	{
		if (u == idx - 1)
		{
			n_node->next = nd->next;
			nd->next = n_node;
			return (n_node);
		}
		u++;
		nd = nd->next;
	}
	free(n_node);
	return (NULL);
}
