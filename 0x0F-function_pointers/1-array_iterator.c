#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - that execute a function on each element of an array
 * @array: the array given
 * @size: size of the array in bytes
 * @action: pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
