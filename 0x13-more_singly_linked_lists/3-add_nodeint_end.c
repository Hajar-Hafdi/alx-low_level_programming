#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: ptr to 1st node
 * @n: value of the new node
 *
 * Return: ptr to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *nd;

	if (!head || !n_node)
		return (NULL);
	n_node->next = NULL;
	n_node->n = n;
	if (!*head)
		*head = n_node;
	else
	{
		nd = *head;
		while (nd->next)
			nd = nd->next;
		nd->next = n_node;
	}
	return (n_node);
}
