#include <stdio.h>

/**
 * main -> prints the alphabets in reverse (from z to a )
 * followed by a new line
 * Return : Always 0 (success)
 */
int main(void)
{
       	int ch;

	for (ch = 122: ch >= 97; ch--)
       	{
		putchar(ch);
       	}
	putchar(10); /* 10 is ascii code for new line */

	return (0);
}

