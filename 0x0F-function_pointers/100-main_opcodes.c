#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c, b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]); /* where b is number of bytes */
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (c = 0; c < b; c++)
	{
		printf("%02hhx", *((char *)main + c));
		if (c < b - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
