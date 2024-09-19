#include "lists.h"

/**
 * get_dnodeint_at_index - parse nth node of a dlistint_t linked list
 *
 * @head: ptr to curr hd nd
 * @index: inx of nd
 *
 * Return: add of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ut = 0;

	while (head)
	{
		if (ut == index)
			return (head);
		head = head->next;
		ut++;
	}
	return (NULL);
}
