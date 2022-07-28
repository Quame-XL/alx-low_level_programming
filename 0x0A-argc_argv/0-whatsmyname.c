#include <stdio.h>

/**
 * main - prints name of function
 * @argc: paramenter
 * @argv: an array
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
