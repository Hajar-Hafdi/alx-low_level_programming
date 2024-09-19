#include "lists.h"

/**
 * dlistint_len - output len of dl
 *
 * @h: add of hea nd
 *
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t o = 0;

	while (h)
	{
		h = h->next;
		o++;
	}
	return (o);
}

