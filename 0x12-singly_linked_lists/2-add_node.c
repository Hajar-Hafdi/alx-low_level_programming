#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 *
 * @head: adress of ptr to head node
 * @str: string field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newer_head = malloc(sizeof(list_t));

	if (!head || !newer_head)
		return (NULL);
	if (str)
	{
		newer_head->str = strdup(str);
		if (!newer_head->str)
		{
			free(newer_head);
			return (NULL);
		}
		newer_head->len = strlen(newer_head->str);
	}
	newer_head->next = *head;
	*head = newer_head;
	return (newer_head);
}
