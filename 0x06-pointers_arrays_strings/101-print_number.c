#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer argument
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int digit = n;

	if (n < 0)
	{
		_putchar('-');
		digit = -digit;
	}
	if ((digit / 10) > 0)
	_putchar((digit % 10) + '0');
}
