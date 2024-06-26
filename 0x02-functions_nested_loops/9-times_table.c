#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int first, second, result;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			result = first * second;

			if (result >= 10)
			{
				_putchar('0' + result / 10);
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + result % 10);
			if (second < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
