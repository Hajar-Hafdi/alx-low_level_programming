#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string separator
 * @n: numb of args
 * @...: strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int u = n;
	char *strr;
	va_list app;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(app, n);
	while (u--)
		printf("%s%s", (strr = va_arg(app, char *)) ? strr : "(nil)",
				u ? (separator ? separator : "") : "\n");
	va_end(app);
}
