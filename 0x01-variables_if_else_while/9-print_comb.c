#include <stdio.h>

/**
 * main -> prints all possible combinations
 * of single-digit numbers
 * separated by ,
 * followed by a space
 * in ascending order
 */
int main(void)
{
	int ch;
	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57);
		{
			putchar(44); /* 44 is ascii for comma */
			putchar(32); /* 32 is ascii for space */
		}
	}
	
	putchar(10);
}
