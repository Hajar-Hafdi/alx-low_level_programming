#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *               followed by a new line
 *
 * @n : starting numbe
*/
void print_to_98(int n)
{
	int counting;

	if (n > 98)
	{
		for (counting = n; counting >= 98; counting--)
		{
			printf("%d", counting);
			if (counting > 98)
			{
				printf(", ");
			}
		}
	}
	else
		{
			for (counting = n; counting <= 98; counting++)
			{
				printf("%d", counting);
				if (counting < 98)
				{
					printf(", ");
				}
			}
		}
	printf("\n");
}
