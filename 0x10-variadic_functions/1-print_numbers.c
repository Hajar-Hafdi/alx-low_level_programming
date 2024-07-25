#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: the string sepatator
 * @n: num of argss
 * @...: the ints to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int u = n;
	va_list app;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(app, n);
	while (u--)
		printf("%d%s", va_arg(app, int),
				u ? (separator ? separator : "") : "\n");
	va_end(app);
}
