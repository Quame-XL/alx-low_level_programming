#include "main.h"

/**
 * create_array - creates an array and initialises it
 * with a specific char
 * @size: size of char
 * @c: character argument
 * Return: NULL or a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int y;

	if (size == 0)
		return (NULL);
	d = (char *)malloc(size * sizeof(char));
	if (d == NULL)
		return (NULL);
	for (y = 0; y < size; y++)
		d[y] = c;

	return (d);
}
