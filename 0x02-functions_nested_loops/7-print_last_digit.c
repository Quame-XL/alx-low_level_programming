#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: integer argument
 * Return: Always 0 (success)
 */
int print_last_digit(int x)
{
	int d;

	if (x < 0)
		x = -x;
	d = n % 10;
	if (d < 0)
		d = -d;
	_putchar(d + '0');
	return (d);
}
