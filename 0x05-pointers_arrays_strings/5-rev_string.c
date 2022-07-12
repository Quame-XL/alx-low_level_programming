#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string argument
 * Return: Always 0
 */
void rev_string(char *s)
{
	char tmp;
	int i, l1, l2;

	l1 = 0;
	l2 = 0;

	while (s[l1] != '\0')
		l1++;

	l2 = l1 - 1;
	for (i = 0; i < l1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l2];
		s[l2] = tmp;
		l2 -= 1;
	}
}
