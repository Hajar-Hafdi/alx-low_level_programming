#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 *               of a listint_t linked list
 *
 * @head: ptr to 1st nd
 *
 * Return: total of data
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
