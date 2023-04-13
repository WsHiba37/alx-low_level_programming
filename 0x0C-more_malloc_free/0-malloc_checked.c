#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned integer
 * Return: a pointer, Otherwise 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);

}
