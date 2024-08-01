#include "lists.h"

/**
 * _stringlen - parse the length off a string
 *
 * @a: the string which length to be cheked
 *
 * Return: int length of string
 */
int _stringlen(char *a)
{
	int u = 0;

	if (!a)
		return (0);
	while (*a++)
		u++;
	return (u);
}
/**
 * print_list - prints a list that is linked
 *
 * @h: ptr to 1st node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		printf("[%d] %s\n", _stringlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		u++;
	}
	return (u);
}
