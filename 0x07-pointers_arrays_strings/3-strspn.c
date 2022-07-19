#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string variable
 * @accept: accepted string variable
 * Return: returns number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x;

	for (x = 0; *(accept + x); x++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + x) == *(accept + i))
				break;
		}
		if (*(accept + i) == '\0')
			break;
	}
	return (x);
}
