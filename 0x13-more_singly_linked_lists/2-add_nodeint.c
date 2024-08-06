#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: ptr to 1st node
 * @n: value for the new node
 *
 * Return: ptr to the newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newer_node = malloc(sizeof(listint_t));

	if (!head || !newer_node)
		return (NULL);
	newer_node->next = NULL;
	newer_node->n = n;
	if (*head)
		newer_node->next = *head;
	*head = newer_node;
	return (newer_node);
}
