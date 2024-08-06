#include "lists.h"

/**
 * *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 *
 * @head: ptr 2 1st nd
 * @index: index of nd
 *
 * Return: ptr to nd
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nd;
	unsigned int c;

	for (nd = head, c = 0; nd && c < index; nd = nd->next, c++)
		;
	return (nd);
}
