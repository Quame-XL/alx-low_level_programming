#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> prints alphabets in lowercase
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* 10 is ascii code for new line */

	return (0);
}
