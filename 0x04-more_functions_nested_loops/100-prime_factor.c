#include <math.h>
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	long int m, larg, y;

	m = 612852475143;
	larg = -1;

	while (m % 2 == 0)
	{
		larg = 2;
		m /= 2;
	}
	for (y = 3; y <= sqrt(m); y = y + 2)
	{
		while (m % y == 0)
		{
			larg = y;
			m = m / y;
		}
	}
	if (m > 2)
	{
		larg = m;
		printf("%ld\n", larg);
	}
	return (0);
}
