#include "3-calc.h"

/**
 * get_op_func - returns pointer to op function
 *
 * @s: string op
 *
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int u = 0;

	while (u < 5)
	{
		if (s && s[0] == ops[u].op[0] && !s[1])
			return (ops[u].f);
		u++;
	}
	return (NULL);
}
