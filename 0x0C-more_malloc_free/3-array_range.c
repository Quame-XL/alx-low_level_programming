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
	int array, i, z;

	if (min > max)
		return (NULL);

	z = max - min + 1;
	array = malloc(sizeof(int) * z);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < z; i++)
		array[i] = min++;

	return (array);
}
