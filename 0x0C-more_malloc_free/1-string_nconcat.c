#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes
 *
 * Return: pointer to space in memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strr;
	unsigned int u, j, s1_leng, s2_leng;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_leng = 0; s1[s1_leng] != '\0'; s1_leng++)
		;
	for (s2_leng = 0; s2[s2_leng] != '\0'; s2_leng++)
		;
	strr = malloc(s1_leng + n + 1);
	if (strr == NULL)
	{
		return (NULL);
	}
	for (u = 0; s1[u] != '\0'; u++)
		strr[u] = s1[u];
	for (j = 0; j < n; j++)
	{
		strr[u] = s2[j];
		u++;
	}
	strr[u] = '\0';
	return (strr);
}
