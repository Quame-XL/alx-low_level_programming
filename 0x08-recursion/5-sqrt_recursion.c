#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - returns the natural square root
 * @n: integer argument
 * Return: square root of a number
 * -1 if there is no sqaure root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates square root
 * @n: integer argument
 * @i: number of iterations
 * Return: some number
 */
int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
