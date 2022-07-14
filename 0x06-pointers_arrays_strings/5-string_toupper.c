#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: string argument
 * Return: string
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a++])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
	}
	return (str);
}
