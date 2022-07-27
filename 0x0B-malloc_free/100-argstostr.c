#include "main.h"

/**
 * argstostr - concatenates all the argument
 * @ac: integer argument
 * @av: array argument
 * Return: NULL or a new line
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int g, b, index, z = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (g = 0; g < ac; g++)
	{
		for (b = 0; av[g][b]; b++)
			z++;
	}
	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);

	index = 0;

	for (g = 0; g < ac; g++)
	{
		for (b = 0; av[g][b]; b++)
			s[index++] = av[g][b];
		s[index++] = '\n';
	}
	s[z] = '\0';
	return (s);
}
