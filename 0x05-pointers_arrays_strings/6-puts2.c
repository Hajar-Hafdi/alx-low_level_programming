#include "main.h"

/**
 * puts2 - prints every char of a string
 *
 * @str: string input
 *
 * Return: void
 */
void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; ++k)
	{
		if (k % 2 == 0)
			putchar(str[k]);
	}
	putchar('\n');
}
