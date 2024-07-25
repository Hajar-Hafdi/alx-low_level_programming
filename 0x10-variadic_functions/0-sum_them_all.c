#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 *
 * @n: numb of args
 * @...: ints to be summed
 *
 * Return: the ints sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int d = 0, u = n;
	va_list app;

	if (!n)
		return (0);
	va_start(app, n);
	while (u--)
		d += va_arg(app, int);
	va_end(app);
	return (d);
}
