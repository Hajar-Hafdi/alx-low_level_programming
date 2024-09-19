#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: add of ptr
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nd;

	while (head)
	{
		nd = head;
		head = head->next;
		free(nd);
	}
}
