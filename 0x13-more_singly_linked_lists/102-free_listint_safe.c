#include "lists.h"
#include <stdlib.h>

/**
 * fd_listint_loop - finds loop in linked lst
 *
 * @head: linked lst to be searched
 *
 * Return: addrss where loop starts, NULL if no loop found
 */
listint_t *fd_listint_loop(listint_t *head)
{
	listint_t *pointer, *fin;

	if (head == NULL)
		return (NULL);
	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (pointer = head; pointer != fin; pointer = pointer->next)
			if (pointer == fin->next)
				return (fin->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - free lists with a loop
 *
 * @h: head of lst
 *
 * Return: num of freed nods
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *nxt, *lpnd;
	size_t length;
	int lp = 1;

	if (h == NULL || *h == NULL)
		return (0);
	lpnd = fd_listint_loop(*h);
	for (length = 0; (*h != lpnd || lp) && *h != NULL; *h = nxt)
	{
		length++;
		nxt = (*h)->next;
		if (*h == lpnd && lp)
		{
			if (lpnd == lpnd->next)
			{
				free(*h);
				break;
			}
			length++;
			nxt = nxt->next;
			free((*h)->next);
			lp = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}
