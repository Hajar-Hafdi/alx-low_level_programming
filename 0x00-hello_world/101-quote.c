#include <unistd.h>

/**
 * main - Entry point
 *
 * Descripton: print a quote using write function
 *
 * Return: 1 (No Success)
*/
int main(void)
{
	char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qu, 59);
	return (1);
}
