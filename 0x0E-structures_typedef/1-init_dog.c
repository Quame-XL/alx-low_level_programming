#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: structure pointer
 * @name: argument 1
 * @age: argument 2
 * @owner: argument 3
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	(*d)name = name;
	(*d)age = age;
	(*d)owner = owner;
}
