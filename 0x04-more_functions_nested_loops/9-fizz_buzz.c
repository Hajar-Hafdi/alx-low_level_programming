#include "main.h"
#include <stdio.h>

/**
 * main - print nums 1 - 100
 *        nums that are multiplies of 3 print Fizz
 *        nums that are multiplies of 5 print Buzz
 *        nums that are multiplies of 3 and 5 print FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && !(number % 5 == 0))
			printf("Fizz");
		else if (number % 5 == 0 && !(number % 3 == 0))
			printf("Buzz");
		else if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", number);
		if (number != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
