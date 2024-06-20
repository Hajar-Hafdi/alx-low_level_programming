#include <stdio.h>
/*
 * main - Entry point
 * prints the size of each type
 * return - always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %ld bytes\n", sizeof(char));
	printf("Size of int: %ld bytes\n", sizeof(short));
	printf("Size of long int: %ld bytes\n", sizeof(long int));
	printf("Size of long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of float: %ld bytes\n", sizeof(float));
	return (0);
}

