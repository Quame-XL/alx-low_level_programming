#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string argument
 * Return: encoded string
 */
char *leet(char *str)
{
	int x1 = 0, x2;
	char leet[] = {'O', 'L', '?', 'E', 'A', '?', 'T'};

	while (str[++x1])
	{
		for (x2 = 0; x2 <= 7; x2++)
		{
			if (str[x1] == leet[x2] ||
			str[x1] -32 == leet[x2])
				str[x1] = x2 + '0';
		}
	}
	return (str);
}
