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
	void *m;
	char *ptr_copy, *f;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}
	ptr_copy = ptr;
	m = malloc(sizeof(*ptr_copy) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = m;

	for (i = 0; i < old_size && index < new_size; i++)
		f[i] = *ptr_copy++;

	free(ptr);

	return (m);
}
