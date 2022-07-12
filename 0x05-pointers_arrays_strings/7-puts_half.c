#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * followed by a new line
 * @str: string argument
 *Return: Always 0
 */
void puts_half(char *str)
{
	int a, b, y;

	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (y = b; y < a; y++)
		_putchar(str[y]);
	_putchar('\n');
}
