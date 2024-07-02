#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates  random valid passwords for 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int M = 0;
	char d;

	srand(time(NULL));
	while (M <= 2645)
	{
		d = rand() % 94 + 33;
		if (M + d > 2772)
			continue;
		M += d;
		putchar(d);
	}
	putchar(2772 - M);
	return (0);
}
