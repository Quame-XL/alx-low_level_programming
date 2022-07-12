#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: string argument
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i, b;

	b = 0;
	while (s[b] != '\0')
		b++;

	for (i = b - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
