#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - a function  that creates an array of chars
 * @size: the size of the array
 * @c: character
 * Return: a pointer to the array, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);
}

