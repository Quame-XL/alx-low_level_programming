#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * separates using some punctuations
 * @str: string argument
 * Return: string
 */
char *cap_string(char *str)
{
	char b[] = {32, 9, '\n', ',', ';', '.', '!', '?',
'"', '{', '}'};
	int l = 13;
	int a = 0, i;

	while (str[a])
	{
		i = 0;
		while (i < l)
		{
			if ((a == 0 || str[a - 1] == b[i]) && (str[a] >= 97 &&
						str[a] <= 122))
				str[a] = str[a] - 32;
			i++;
		}
		a++;
	}
	return (str);
}
