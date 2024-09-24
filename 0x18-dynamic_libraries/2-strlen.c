#include "main.h"

/**
 * _strlen - a function that calculates the length of a string
 *
 * Description: calculates the length of a string
 *
 * @s: pointer to the string.
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;
	return (len);
}
