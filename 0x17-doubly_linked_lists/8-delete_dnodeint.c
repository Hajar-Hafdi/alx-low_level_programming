#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 *
 * @head: add of ptr
 * @index: index of the node
 *
 * Return: 1 if succesful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tm = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (tm == NULL)
			return (-1);
		tm = tm->next;
	}
	if (tm == *head)
	{
		*head = tm->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tm->prev->next = tm->next;
		if (tm->next != NULL)
			tm->next->prev = tm->prev;
	}
	free(tm);
	return (1);
}

