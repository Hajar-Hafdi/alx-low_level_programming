#include "lists.h"

void _theconstructor(void)__attribute__ ((constructor));

/**
 * _theconstructor - to be executed before main is
 *
 * Return: void
 */
void _theconstructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
