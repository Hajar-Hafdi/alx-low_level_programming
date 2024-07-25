#include "variadic_functions.h"

/**
 * forma_char - formats chars
 *
 * @separator: str separator
 * @app: args pointer
 */
void forma_char(char *separator, va_list app)
{
	printf("%s%c", separator, va_arg(app, int));
}
/**
 * forma_int - formats int
 *
 * @separator: str separator
 * @app: arg pointer
 */
void forma_int(char *separator, va_list app)
{
	printf("%s%d", separator, va_arg(app, int));
}
/**
 * forma_float - formatss float
 *
 * @separator: separator of string
 * @app: arg pointer
 */
void forma_float(char *separator, va_list app)
{
	printf("%s%f", separator, va_arg(app, double));
}
/**
 * forma_string - formats strings
 *
 * @separator: separator of string
 * @app: arg pointer
 */
void forma_string(char *separator, va_list app)
{
	char *strr = va_arg(app, char *);

	switch ((int)(!strr))
	case 1:
		strr = "(nil)";
		printf("%s%s", separator, strr);
}
/**
 * print_all - prints anything
 *
 * @format: the string format
 */
void print_all(const char * const format, ...)
{
	int u = 0, j;
	char *separator = "";
	va_list app;
	token_t tokens[] = {
		{"c", forma_char},
		{"i", forma_int},
		{"f", forma_float},
		{"s", forma_string},
		{NULL, NULL}
	};
	va_start(app, format);
	while (format && format[u])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[u] == tokens[j].token[0])
			{
				tokens[j].f(separator, app);
				separator = ", ";
			}
			j++;
		}
		u++;
	}
	printf("\n");
	va_end(app);
}
