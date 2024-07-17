#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlenn - find length of a string
 *
 * @s: string
 *
 * Return: int
 */
int _strlenn(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * *str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, u;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlenn(s1);
	size2 = _strlenn(s2);
	n = malloc((size1 + size2) * sizeof(char) + 1);
	if (n == 0)
		return (0);
	for (u = 0; u <= size1 + size2; u++)
	{
		if (u < size1)
			n[u] = s1[u];
		else
			n[u] = s2[u - size1];
	}
	n[u] = '\0';
	return (n);
}
