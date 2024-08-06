#include "lists.h"

/**
 * listint_len - output linked List
 *
 * @h: ptr to 1st node
 *
 * Return: size of the list printed
 */
size_t listint_len(const listint_t *h)
{
	size_t u = 0;

	while (h)
	{
		h = h->next;
		u++;
	}
	return (u);
}
