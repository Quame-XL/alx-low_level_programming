#include "main.h"

/**
 * _strcpy - copies string to another variable
 * @dest: destination variable
 * @src: source variable
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *kay = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (kay);
}
