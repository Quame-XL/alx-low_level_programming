#include <stdio.h>

/**
 * main - prints the number of argument passed in it
 * @argc: argc argument
 * @argv: an array
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
