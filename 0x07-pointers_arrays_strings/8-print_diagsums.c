#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of two matrices
 * @a: integer argument
 * @size: size of a
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int x, s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[(size + 1) * x];
		s2 += a[(size + 1) * (x + 1)];
	}

	printf("%d, %d\n, s1, s2);
}
