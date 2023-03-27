#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps values of two integers
 * @a: parameter checked
 * @b: parameter checked
 * @var
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
