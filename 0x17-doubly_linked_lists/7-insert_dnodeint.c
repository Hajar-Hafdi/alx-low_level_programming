#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: ptr
 * @idx: index
 * @n: int
 *
 * Return: NULL if fails, if not address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tm = *h, *nw;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tm = tm->next;
		if (tm == NULL)
			return (NULL);
	}
	if (tm->next == NULL)
		return (add_dnodeint_end(h, n));
	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = tm;
	nw->next = tm->next;
	tm->next->prev = nw;
	tm->next = nw;

	return (nw);
}
