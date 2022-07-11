#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - resets the value of a variable to 98
 * @*n: pointer argument
 * @n: integer argument
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int n;
	int *n;

	n = &n;
	printf("n = %d\n", n);
	*n = 98;
	printf("n = %d\n", n);
	return (0);
}
