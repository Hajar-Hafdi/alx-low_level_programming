#include "main.h"
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
	int sz = 0;

	for (; s[sz] != '\0'; sz++)
		;
	return (sz);
}
/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: int
 * @av: arguments
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int u = 0, ncc = 0, j = 0, cpt = 0;
	char *n;

	if (a == 0 || av == NULL)
		return (NULL);
	for (; u < ac; u++, ncc++)
		ncc += _strlen(av[u]);
	| s = malloc(sizeof(char) * ncc + 1);
	if (s == 0)
		return (NULL);
	for (u = 0; u < ac; u++)
	{
		for (j = 0; av[u][j] != '\0'; j++, cpt++)
			s[cpt] = av[u][j];
		s[cpt] = '\n';
		cpt++;
	}
	s[cpt] = '\0';
	return (s);
}
