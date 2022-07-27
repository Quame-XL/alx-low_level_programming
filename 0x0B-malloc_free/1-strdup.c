#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of string
 * @str: string argument
 * Return: NULL or a pointer
 */
char *_strdup(char *str)
{
	char *h;
	unsigned int l, y;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	h = malloc(sizeof(char) * (l + 1));

	if (h == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < l; y++)
	{
		h[y] = str[y];
	}
	h[l] = '\0';

	return (h);
}
