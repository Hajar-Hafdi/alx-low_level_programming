#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: addrss of ptr to the head node
 * @str: string field of node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newer_node = malloc(sizeof(list_t));
	list_t *thenode = *head;

	if (!head || !newer_node)
		return (NULL);
	if (str)
	{
		newer_node->str = strdup(str);
		if (!newer_node->str)
		{
			free(newer_node);
			return (NULL);
		}
		newer_node->len = strlen(newer_node->str);
	}
	if (thenode)
	{
		while (thenode->next)
			thenode = thenode->next;
		thenode->next = newer_node;
	}
	else
		*head = newer_node;
	return (newer_node);
}
