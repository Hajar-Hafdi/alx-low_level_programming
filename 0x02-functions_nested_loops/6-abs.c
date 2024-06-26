#include "main.h"

/**
 * _abs - function that computes the absolute number of any given num
 *
 * @num : int who's value to be valued
 *
 * Return: return -num if num is less than 0
 *         return num if num is greater than or equals 0
*/
int _abs(int num)
{
	if (num < 0)
	{
	return (-num);
	}
	else
	{
	return (num);
	}
}
