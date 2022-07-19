#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string variable
 * @c: character variable
 * Return: pointer to the first occurrence of the ch'ter
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c; ++s)
		{
			return (s);
		}
	}
	return (0);
}
