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
	for (; str[sz] != '\0'; sz++)
		;

	n = malloc(sz * sizeof(*str) + 1);

	if (n == 0)
		return (NULL);
	else if
		for (; j < sz; j++)
			n[j] = str[j];
	return (n);
}
