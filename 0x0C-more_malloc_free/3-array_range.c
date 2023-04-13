#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer, or NULL
 */
int *array_range(int min, int max)
{
	int index, size;
	int *num;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	num = malloc(size * sizeof(int));
	if (num == NULL)
		return (NULL);
	index = 0;
	while (min <= max)
	{
		num[index] = min;
		index++;
		min++;
	}
	return (num);
	free(num);
}
