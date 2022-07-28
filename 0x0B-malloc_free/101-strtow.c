#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking the end of string
 * @str: string argument
 * Return: index marking end of initial word
 */
int word_len(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}
	return (l);
}

/**
 * count_words - counts number of words in string
 * @str: string argument
 * Return: results after counting
 */
int count_words(char *str)
{
	int i = 0, w = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;
	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += word_len(str + i);
		}
	}

	return (w);
}

/**
 * strtow - divide a string into two
 * @str: string argument
 * Return: NULL or pointer to array of strings
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, w, wo, let, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	w = count_words(str);

	if (w == 0)
		return (NULL);
	for (wo = 0; wo < w; wo++)
	{
		while (str[i] == ' ')
			i++;

		let = word_len(str + i);
		strings[wo] == malloc(sizeof(char) * (let + 1));

		if (strings[wo] == NULL)
		{
			for (; wo >= 0; wo--)
				free(strings[wo]);

			free(strings);
			return (NULL);
		}

		for (k = 0; k < let; k++)
			strings[wo][k] = str[i++];

		strings[wo][k] = '\0';
	}
	strings[wo] = NULL;

	return (strings);
}
