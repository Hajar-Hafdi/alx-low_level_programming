#include "lists.h"

/**
 * print_listint - parse a linked List
 *
 * @h: ptr to 1st node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t u = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		u++;
	}
	return (u);
}
