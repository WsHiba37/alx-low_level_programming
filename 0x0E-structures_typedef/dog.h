#ifndef DOG_H

#define DOG_H

#include <stdio.h>

/**
 * struct dog - contains the name, age and the owner of the dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
