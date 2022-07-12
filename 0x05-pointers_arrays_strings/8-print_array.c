#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * followed by a new line
 * @a: array pointer
 * @n: number of elements of array
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		printf("%d", a[y]);
		if (y != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
