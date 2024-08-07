#include "lists.h"
#include <stdlib.h>

/**
 * *find_listint_loop - finds the loop in a linked list
 *
 * @head: lnkd lst to be searched
 *
 * Return: returns the address of nd, NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer, *fin;

	if (head == NULL)
		return (NULL);
	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (pointer = head; pointer != end; pointer = pointer->next)
			if (pointer == fin->next)
				return (fin->next);
	}
	return (NULL);
}

