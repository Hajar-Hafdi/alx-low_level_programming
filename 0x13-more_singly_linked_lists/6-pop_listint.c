#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *               and returns the head node’s data (n).
 *
 * @head: addrss of ptr to 1st nd
 *
 * Return: value of nd
 */
int pop_listint(listint_t **head)
{
	listint_t *nd;
	int c;

	if (!head || !*head)
		return (0);
	nd = (*head)->next;
	c = (*head)->n;
	free(*head);
	*head = nd;
	return (c);
}
