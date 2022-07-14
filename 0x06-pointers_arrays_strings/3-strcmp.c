#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int dist = 0;

	while (1)
	{
		if (s1[n] == '\0' && s2[n] == '\0')
			break;
		else if (s1[n] == '\0')
		{
			dist = s2[n];
			break;
		}
		else if (s2[n] == '\0')
		{
			dist = s1[n];
			break;
		}
		else if (s1[n] != s2[n])
		{
			dist = s1[n] - s2[n];
			break;
		}
		else
			n++;
	}
	return (dist);
}
