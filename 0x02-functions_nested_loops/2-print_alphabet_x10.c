#include "main.h"
/***/
void print_alphabet_x10(void);
{
	int letter, time;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (time = '0'; time <= 10; time++)
		putchar(letter);
		
