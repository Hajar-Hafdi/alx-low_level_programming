#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: add of ptr
 * @n: int
 *
 * Return: add of new nd NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw = malloc(sizeof(dlistint_t)), *nd;

	if (!head || !nw)
		return (nw ? free(nw), NULL : NULL);
	nw->n = n;
	nw->next = NULL;
	if (!*head)
	{
		nw->prev = NULL;
		*head = nw;
	}
	else
	{
		nd = *head;
		while (nd->next)
			nd = nd->next;
		nd->next = nw;
		nw->prev = nd;
	}
	return (nw);
}
