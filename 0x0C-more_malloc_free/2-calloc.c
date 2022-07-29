#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of element
 * @size: bytes of elements
 * Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *h;
	unsigned int i;

	if (nmeb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	h = m;

	for (i = 0; i < (size * nmemb); i++)
		h[i] = '\0';

	return (m);
}
