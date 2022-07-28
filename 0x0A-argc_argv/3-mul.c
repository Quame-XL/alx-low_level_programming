#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: parameter
 * @argv: an array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int ans, n1, n2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	ans = n1 * n2;

	printf("%d\n", ans);
	return (0);
}
