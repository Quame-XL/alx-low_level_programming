#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @string: string argument
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a newly allocated space in memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cntnt;
	int nm, l, a, b;

	nm = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nm < 0)
		return (NULL);
	if (nm >= _strlen(s2))
		nm = _strlen(s2);

	l = _strlen(s1) + nm + 1;

	cntnt = malloc(sizeof(*cntnt) * l);
	if (cntnt == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		cntnt[a] = s1[a];

	for (b = 0; b < nm; b++)
		cntnt[a + b] = s2[b];
	cntnt[a + b] = '\0';

	return (cntnt);
}
