#include "main.h"

/**
 * main - prints alphabets in lower case
 * 
 * Return: Always 0.
 */
int main(void)
{
	int alph;
	for (alph = 97; alph <= 122; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
