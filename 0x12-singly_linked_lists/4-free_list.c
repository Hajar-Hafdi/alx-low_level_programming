#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: ptr to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, nxt_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		nxt_node = node->next;
		free(node->str);
		free(node);
		node = nxt_node;
	}
}
