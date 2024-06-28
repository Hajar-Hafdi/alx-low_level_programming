#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int number, line, counting;

	for (line = 1; line <= 10; line++)
	{
		for (counting = 0; counting <= 14; counting++)
		{
			number = counting;
			if (counting > 9)
			{
				_putchar(1 + 48);
				number = counting % 10;
			}
			_putchar(number + 48);
		}
		_putchar('\n');
	}
}

