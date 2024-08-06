#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index
 *                            of a listint_t linked list
 *
 * @head: addrss of ptr to 1st nd
 * @index: index of nd to be deleted
 *
 * Return: return 1 when success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nd, *prc_nd;
	unsigned int u = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		nd = *head;
		*head = (*head)->next;
		free(nd);
		return (1);
	}
	nd = *head;
	while (nd)
	{
		if (u == index)
		{
			prc_nd->next = nd->next;
			free(nd);
			return (1);
		}
		u++;
		prc_nd = nd;
		nd = nd->next;
	}
	return (-1);
}
