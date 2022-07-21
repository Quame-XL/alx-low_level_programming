#include "main.h"

/**
 * _pow_recursion - returns the value of x exponent y
 * @x: integer argument
 * @y: integer argument
 * Return: nothing
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
