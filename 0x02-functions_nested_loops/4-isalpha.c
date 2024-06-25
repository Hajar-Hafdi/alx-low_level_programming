#include "main.h"

/**
 * _isalpha - function that checks for upper and lower case alphabets
 *
 * @c : checks input of function
 *
 * Return: retur 1 if c is an alphabet
 *         otherwise always return 0 (Success)
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		if (c >= 97 && c <= 122)
			return (1);
	}
	return (0);
}
