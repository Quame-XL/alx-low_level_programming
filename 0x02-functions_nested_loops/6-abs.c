#include "main.h"

/**
 * _abs -> computes the absolute value of an integer
 * @x: integer argument
 * Return: Always 0 (success)
 */
int _abs(int x)
{
	if (x < 0)
		x = -x;
	return (x);
}

