#include "main.h"

/**
 *_isdigit - check if c is a digit
 *
 * @c : input for the digits.
 *
 * Return: return 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
