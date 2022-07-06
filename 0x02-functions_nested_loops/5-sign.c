#include "main.h"

/**
 * print_sign -> prints the sign of a number
 * @n: number argument
 * Return: 1, 0 or -1 based on condition
 * prints +, 0 or - based on condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

