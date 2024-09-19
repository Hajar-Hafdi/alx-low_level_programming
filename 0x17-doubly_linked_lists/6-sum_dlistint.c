#include "lists.h"

/**
 * sum_dlistint - prints sum of all the data (n) of a dlistint_t
 *
 * @head: add of ptr
 *
 * Return: returns 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int tot = 0;

	while (head)
	{
		tot += head->n;
		head = head->next;
	}
	return (tot);
}
