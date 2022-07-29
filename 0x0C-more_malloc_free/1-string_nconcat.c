#include "main.h"
#include <stdlib.h>

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
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s[i]; i++)
		l++;
	cntnt = malloc(sizeof(char) * (l + 1));

	if (cntnt == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		cntnt[l++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		cntnt[l++] = s2[i];

	cntnt[l] = '\0';
	return (cntnt);
}
