#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for money
 *
 * @argc: num of cmmd line args
 * @argv: pointer to an array of cmmd line args
 *
 * Return: 0 Success, non-zero if fail
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int u, lesscents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (u = 0; u < 5; u++)
		{
			if (money >= cents[u])
			{
				lesscents += money / cents[u];
				money = money % cents[u];
				if (money % cents[u] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lesscents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
