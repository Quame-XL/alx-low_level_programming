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
	int x, z1;
	unsigned int s1, s2;

	z1 = 0;
	s1 = 0;
	s2 = 0;

	z1 = (size * size) - 1;

	for (x = 0; x <= z1; x = x + (size + 1))
	{
		s1 = s1 + a[x];
	}
	for (x = (size - 1); x < z1; x = x + (size - 1))
	{
		s2 = s2 + a[x];
	}

	printf("%d, %d\n", s1, s2);
}
