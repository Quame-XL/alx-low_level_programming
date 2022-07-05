#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main -> prints alphabets in lowercase
 * excluding q and e
 * followed by a new line
 * Return: 0 (success)
 */
int main (void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 113 && ch != 101)
		{
			putchar(ch);
		}
	}
	putchar (10);
	return (0);
}
