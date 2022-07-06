#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer argument
 */
void print_to_98(int n)
{
	for (int i = n; i <= 98; i = i + 1)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
}

