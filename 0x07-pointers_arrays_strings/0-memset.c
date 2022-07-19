#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: character argument
 * @b: character argument
 * @n: integer argument
 * Return: a pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
