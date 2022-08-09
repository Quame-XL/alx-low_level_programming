#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to a function
 * Return: index of first element that matches with `cmp`
 * or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
