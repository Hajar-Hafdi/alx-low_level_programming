#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memo
 *
 * @str: string
 *
 * Return: 0 (Success)
 */
char *_strdup(char *str)
{
	int j = 0, sz = 0;
	char *n;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	n = malloc(sizeof(char) * (j + 1));
	if (n == NULL)
		return (NULL);
	for (sz = 0; str[sz]; sz++)
		n[sz] = str[sz];
	return (n);
}
