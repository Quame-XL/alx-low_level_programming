#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> prints all possible combinations
 * of two two-digit numbers
 * ranges from 0 to 99
 * two numbers are separated by space
 * combination of numbers is separated by comma
 * followed by space
 * Return 0 (success)
 */
int main(void)
{
	int ch;
	int n;
	for (ch = 48; ch <=57; n++)
	{
		putchar(ch);
		putchar(n);
		if (ch != 57 || n !=57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
