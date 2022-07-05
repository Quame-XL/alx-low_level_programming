#include <stdio>

/**
 * main -> prints all possible different 
 * combinations of three digit
 * separated by comma
 * followed by a space
 * Return: 0 (success)
 */
int main (void)
{
	int ch;
	int n;
	int m;
	for (ch = 49; ch <= 57; ch++)
	{
		for (n = 50; n <= 57; n++)
		{
			if (n > ch && m > n)
			{
				putchar(ch);
				putchar(n);
				putchar(m);
				if (ch != 55 || n != 56 || m != 57)
				{
					putchar (44);
					putchar (32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
