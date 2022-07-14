#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination where the string will be appended
 * @src: source of string to be concat.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (dest[i++])
		l++;
	for (i = 0; src[i]; i++)
	{
		dest[l++] = src[i];
	}
	return (dest);
}
