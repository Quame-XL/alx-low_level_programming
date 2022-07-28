#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins for change
 * @argc: parameter
 * @argv: an array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, b, ans = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && n >= 0; b++)
	{
		while (n >= coins[b])
		{
			n -= coins[b];
			ans++;
		}
	}
	printf("%d\n", ans);
	return (0);
}
