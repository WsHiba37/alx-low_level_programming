#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of one element of the array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
