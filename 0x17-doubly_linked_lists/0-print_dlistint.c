#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: add of head nd
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ur = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ur++;
	}
	return (ur);
}
