#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, l;
	char *p, *q;

	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (j = 0; owner[j] != '\0'; j++)
		;
	q = malloc(sizeof(char) * (j + 1));
	if (q == NULL)
	{
		free(new_dog);
		free(p);
		return (NULL);
	}
	for (l = 0; l <= i; l++)
		p[l] = name[l];
	for (l = 0; l <= j; l++)
		q[l] = owner[l];
	new_dog->name = p;
	new_dog->age = age;
	new_dog->owner = q;
	return (new_dog);
}
