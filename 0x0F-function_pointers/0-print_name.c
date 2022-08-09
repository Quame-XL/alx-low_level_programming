#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string argument
 * @f: function name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
