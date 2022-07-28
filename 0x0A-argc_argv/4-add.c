#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: parameter
 * @argv: an array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int ans = 0, n, a, b, c;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{

			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (c = 1; c < argc; c++)
	{
		n = atoi(argv[c]);
		ans += n;
	}
	printf("%d\n", ans);
	return (0);
}
