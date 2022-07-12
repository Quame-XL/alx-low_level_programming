#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string argument
 * Return: Always 0
 */
int _atoi(char *s)
{
	int sgn;
	unsigned int n;
	char *temp;

	temp = s;
	n = 0;
	sgn = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sgn *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			n = n * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (n * sgn);
}
