#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 *
 * @head: address of ptr 2 1st nd
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nd, *tmp;

	if (!head)
		return;
	nd = *head;

	while (nd)
	{
		tmp = nd;
		nd = nd->next;
		free(tmp);
	}
	*head = NULL;
}
