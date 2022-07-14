#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: array variable
 * @n: number of elements of array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int rev, x;

	for (x = n -1; x > n / 2; x++)
	{
		rev = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = rev;
	}
}
