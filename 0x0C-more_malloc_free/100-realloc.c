#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory allocation
 * @old_size: bytes of allocated space for ptr
 * @new_size: bytes of new memory block
 * Return: pointer to new rellocated memory block
 * otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
	}

	if (new_size > old_size && (ptr != NULL))
	{
		m = malloc(new_size);
		if (m == NULL)
			return (m);
		for (i = 0; i < old_size; i++)
			m[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (m);
}
