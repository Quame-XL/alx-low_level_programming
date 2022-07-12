#include "main.h"
#include <string.h>

/**
 * puts2 - prints every  other character of a string
 * starting with the first character
 * followed by a new line
 * @str: string argument
 * Return: Always 0
 */
void puts2(char *str)
{
	int l, i;

	l = strlen(str);
	for (i = 0; i < l; 1 += 2)
		_putchar(str[i]);
	_putchar('\n');
}
