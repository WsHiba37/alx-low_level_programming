#include "dog.h"

/**
 * init_dog - a function that initializes a var of type struct dog
 * @d: first element
 * @name: name of the dog
 * @age: float
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
