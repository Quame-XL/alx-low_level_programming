#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int alph;

	for (alph = 97; alph <= 122; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');

	return (0);
}
