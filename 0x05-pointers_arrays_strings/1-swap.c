#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer argument 1
 * @b: integer argument 2
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}
