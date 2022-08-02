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

	struct dog *n_dog = NULL;

	ln = 0;
	while (name[ln] != '\0')
		ln++;
	lo = 0;
	while (owner[lo] != '\0')
		lo++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL);
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(ln + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(lo + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (a = 0; a <= ln; a++)
		n_dog->name[a] = name[a];
	for (a = 0; a <= lo; a++)
		n_dog->owner[a] = owner[a];
	n_dog->age = age;
	return (n_dog);
}
