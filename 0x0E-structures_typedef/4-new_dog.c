#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: 1st argument
 * @age: 2nd argument
 * @owner: 3rd argument
 * Return: null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, ln, lo;

	struct dog *nw_dog = NULL;

	ln = 0;
	while (name[ln] != '\0')
		ln++;
	lo = 0;
	while (owner[lo] != '\0')
		lo++;

	nw_dog = malloc(sizeof(struct dog));
	if (nw_dog == NULL);
	{
		free(nw_dog);
		return (NULL);
	}

	nw_dog->name = malloc(ln + 1);
	if (nw_dog->name == NULL)
	{
		free(nw_dog->name);
		free(nw_dog);
		return (NULL);
	}

	nw_dog->owner = malloc(lo + 1);

	if (nw_dog->owner == NULL)
	{
		free(nw_dog->name);
		free(nw_dog->owner);
		free(nw_dog);
		return (NULL);
	}

	for (a = 0; a <= ln; a++)
		nw_dog->name[a] = name[a];

	for (a = 0; a <= lo; a++)
		nw_dog->owner[a] = owner[a];
	nw_dog->age = age;

	return (nw_dog);
}
