#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list
 *
 * @head: addrss of ptr to 1st nd
 *
 * Return: addrss of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd = NULL, *nxt = NULL;

	if (!head || !*head)
		return (NULL);

	nd = *head;
	*head = NULL;
	while (nd)
	{
		nxt = nd->next;
		nd->next = *head;
		*head = nd;
		nd = nxt;
	}
	return (*head);
}
