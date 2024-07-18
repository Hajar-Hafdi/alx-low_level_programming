#include "main.h"
#include <stdlib.h>

/**
 * wordcnt - counts the num of wrds in a string
 *
 * @s: string to be counted
 *
 * Return: int of nums of words
 */
int wordcnt(char *s)
{
	int u, m = 0;

	for (u = 0; s[u]; u++)
	{
		if (s[u] == ' ')
		{

			if (s[u + 1] != ' ' && s[u + 1] != '\0')
				m++;
		}
		else if (u == 0 || s[u - 1] == ' ')
		{
			m++;
		}
	}
	return (m);
}
/**
 * strtow - splits a string into words
 *
 * @str: string
 *
 * Return: pointer
 */
char **strtow(char *str)
{
	int u, j, k, l, n = 0, wcc = 0;
	char **v;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wordcnt(str);
	if (n == 0)
		return (NULL);
	v = (char **)malloc((n + 1) * sizeof(char *));
	if (v == NULL)
		return (NULL);
	u = 0;
	while (str[u])
	{
		if (str[u] != ' ' && (u == 0 || str[u - 1] == ' '))
		{
		j = 0;
		while (str[u + j] != ' ' && str[u + j] != '\0')
			j++;
		v[wcc] = (char *)malloc((j + 1) * sizeof(char));
		if (v[wcc] == NULL)
		{
			for (k = 0; k < wcc; k++)
				free(v[k]);
			free(v);
			return (NULL);
		}
		for (l = 0; l < j; l++)
			v[wcc][l] = str[u + 1];
		v[wcc][j] = '\0';
		wcc++;
		u += j;
		}
		else
		{
			u++;
		}
	}
	v[wcc] = NULL;
	return (v);
}
