#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _rl - reallocates mem for an array ptrs
 *
 * @list: the old list to be added
 * @size: size of new list one more than the old
 * @nw: new node to append to list
 *
 * Return: ptr to newer list
 */
const listint_t **_rl(const listint_t **list, size_t size, const listint_t *nw)
{
	const listint_t **nwlist;
	size_t u;

	nwlist = malloc(size * sizeof(listint_t *));
	if (nwlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (u = 0; u < size - 1; u++)
		nwlist[u] = list[u];
	nwlist[u] = nw;
	free(list);
	return (nwlist);
}
/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: ptr to the start of list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t u, ber = 0;
	const listint_t **lst = NULL;

	while (head != NULL)
	{
		for (u = 0; u < ber; u++)
		{
			if (head == lst[u])
			{
				printf("->[%p} %d\n", (void *)head, head->n);
				free(lst);
				return (ber);
			}
		}
		ber++;
		lst = _rl(lst, ber, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(lst);
	return (ber);
}
