#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: initial member of array
 * @max: last element
 * Return: pointer to new array otherwise NULL
 */
int *array_range(int min, int max)
{
	int a, b;
	int *m;

	a = 0;

	if (min > max)
		return (NULL);

	a = ((max + 1) - min);
	m = malloc(sizeof(int) * a);

	if (m == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		*(m + b) = min + b;
	}

	return (m);
}
