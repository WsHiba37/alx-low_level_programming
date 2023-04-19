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

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			return (-1);
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
