#ifndef STRUCT
#define STRUCT

/**
 * struct dog - structure dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of dog
 * Return:
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_type;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_type *new_dog(char *name, float age, char *owner);
void free_dog(dog_type *d);

#endif /* STRUCT */
