#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 *
 * @str: string to return
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (str[k] >= 97 && str[k] <= 122)
		{
			str[k] = str[k] - 32;
		}
	}
	return (str);
}
