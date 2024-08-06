#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 *
 * @head: ptr to 1st node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nd;

	while (head)
	{
		nd = head;
		head = head->next;
		free(nd);
	}
}
