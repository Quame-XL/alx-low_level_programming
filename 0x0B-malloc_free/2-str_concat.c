#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1 argument
 * @s2: string 2 argument
 * Return: s1 and s2 or null
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *h;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;

	c = a + b;
	h = (char *)malloc(c *sizeof(char) + 1);
	if (h == NULL)
		return (NULL);
	b = 0;
	while (d < c)
	{
		if (d < a)
			h[d] = s1[d];
		if (d >= a)
		{
			h[d] = s2[b];
			b++;
		}
		d++;
	}
	h[d] = '\0';
	return (h);
}
