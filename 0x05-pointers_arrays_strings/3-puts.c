#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: character argument
 * followed by a new line
 * Return: Always 0
 */
void _puts(char *str)
{
	while (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
