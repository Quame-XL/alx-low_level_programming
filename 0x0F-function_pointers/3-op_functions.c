#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: results of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division
 * @a: 1st number
 * @b: 2nd number
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
