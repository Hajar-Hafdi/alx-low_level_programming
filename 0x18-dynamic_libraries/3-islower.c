#include "main.h"

/**
 * _islower - function to check if char is lowercase
 *
 * @c : checks input of char
 *
 * Return: return 1 if character is lower case
 *        otherwise always return 0 (Success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
