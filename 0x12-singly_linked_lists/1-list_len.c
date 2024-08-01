#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: ptr to 1st node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		h = h->next;
		u++;
	}
	return (u);
}
