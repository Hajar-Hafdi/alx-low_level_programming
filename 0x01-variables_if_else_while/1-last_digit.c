#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using if else loop to find if last digit of n is greater to 5.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n, Last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

Last_digit = n % 10;
printf("Last digit of %i is %i", n, Last_digit);

if (Last_digit > 5)
{
printf(" and is greater than 5\n");
}
else if (Last_digit == 0)
{
printf(" and is 0\n");
}
else if (Last_digit < 6 && Last_digit != 0)
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
