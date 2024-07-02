#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string input
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char tem;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		tem = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tem;
	}
}
