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
	int M;
	char d;

	strand(time(NULL));
	while (sum <= 2645)
	{
		d = rand() % 120;
		M += d;
		putchar(c);
	}
	putchar(2772 - M);
	return (0);
}
