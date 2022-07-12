#include "main.h"

/**
 * _puts - prints a string
 * @str: character argument
 * followed by a new line
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
