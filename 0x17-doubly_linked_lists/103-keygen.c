#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords
 *
 * @arc: The number of arguments
 * @arv: An array of pointers
 *
 * Return: Always 0 (Success)
 */
int main(int __attribute__((__unused__)) arc, char *arv[])
{
	char psssword[7], *codx;
	int ln = strlen(arv[1]), u, tmpp;

	codx = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmpp = (ln ^ 59) & 63;
	psssword[0] = codx[tmpp];

	tmpp = 0;
	for (u = 0; u < ln; u++)
		tmpp += arv[1][u];
	psssword[1] = codx[(tmpp ^ 79) & 63];
	tmpp = 1;
	for (u = 0; u < ln; u++)
		tmpp *= arv[1][u];
	psssword[2] = codx[(tmpp ^ 85) & 63];
	tmpp = 0;
	for (u = 0; u < ln; u++)
	{
		if (arv[1][u] > tmpp)
			tmpp = arv[1][u];
	}
	srand(tmpp ^ 14);
	psssword[3] = codx[rand() & 63];
	tmpp = 0;
	for (u = 0; u < ln; u++)
		tmpp += (arv[1][u] * arv[1][u]);
	psssword[4] = codx[(tmpp ^ 239) & 63];
	for (u = 0; u < arv[1][0]; u++)
		tmpp = rand();
	psssword[5] = codx[(tmpp ^ 229) & 63];
	psssword[6] = '\0';
	printf("%s", psssword);
	return (0);
}
