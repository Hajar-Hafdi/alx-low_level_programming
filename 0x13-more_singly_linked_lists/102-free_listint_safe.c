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
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			listint_t *entry = head;

			while (entry != slow)
			{
				entry = entry->next;
				slow = slow->next;
			}
			return (entry);
		}
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
	size_t length = 0;
	int lp_dtc = 0;

	if (h == NULL || *h == NULL)
		return (0);
	lpnd = fd_listint_loop(*h);
	while (*h != NULL)
	{
		length++;
		nxt = (*h)->next;
	if (*h == lpnd && !lp_dtc)
	{
	lp_dtc = 1;
if (lpnd == lpnd->next)
{
free(*h);
break;
}
nxt = nxt->next;
}
free(*h);
*h = nxt;
if (*h == lpnd && lp_dtc)
	break;
	}
*h = NULL;
return (length);
}
