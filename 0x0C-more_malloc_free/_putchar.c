#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes characters to standard output
 * @c: printed character
 * Return: 1 on success
 * or -1
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
