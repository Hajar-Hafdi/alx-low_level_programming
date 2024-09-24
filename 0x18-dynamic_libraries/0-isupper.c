#include "main.h"

/**
 * _isupper - check if c is upper case
 *
 * @c : input for the alphabets.
 *
 * Return: return 1 if upper 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
