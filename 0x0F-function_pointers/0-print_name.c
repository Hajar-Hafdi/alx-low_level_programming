#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name of the string
 * @f: pointer of the printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
