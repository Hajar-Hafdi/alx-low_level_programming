#include <stdio.h>
/*
 * main - Entry point
 * prints the size of each type
 * return - always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld bytes\n", sizeof(char));
	printf("Size of a int: %ld bytes\n", sizeof(short));
	printf("Size of a long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of a float: %ld bytes\n", sizeof(float));
	return (0);
}

