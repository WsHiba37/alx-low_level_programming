#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer to a 2-D array of integers.
 * @width: columns
 * @height: rows
 * Return: pointer to a 2-D array, Otherwise, NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/*To allocate the memory for each element in the array*/
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
