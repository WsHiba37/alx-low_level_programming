#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}