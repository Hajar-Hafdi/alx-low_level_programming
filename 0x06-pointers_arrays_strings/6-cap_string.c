#include "main.h"
#include <stdio.h>

/**
 * isLow - determines if ascii is lower case
 *
 * @c: char
 *
 * Return: 1 if true otherwise 0
 */
int isLow(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - determines if ascii is a delimter
 *
 * @c: char
 *
 * Return: 1 if true, 0 if not
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
/**
 * *cap_string - capitalizes all words of a string
 *
 * @s: input string
 *
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundelimit = 1;
		else if (isLow(*s) && foundelimit)
		{
			*s -= 32;
			foundelimit = 0;
		}
		else
			foundelimit = 0;
		s++;
	}
	return (ptr);
}
