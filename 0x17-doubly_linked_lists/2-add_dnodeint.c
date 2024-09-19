#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @h: add of ptr to curr hd nd
 * @n: int
 *
 * Return: add of new nd NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw = malloc(sizeof(dlistint_t));

	if (!head || !nw)
		return (nw ? free(nw), NULL : NULL);
	nw->n = n;
	nw->prev = NULL;
	if (!*head)
	{
		*head = nw;
		nw->next = NULL;
	}
	else
	{
		nw->next = *head;
		(*head)->prev = nw;
		*head = nw;
	}
	return (nw);
}
