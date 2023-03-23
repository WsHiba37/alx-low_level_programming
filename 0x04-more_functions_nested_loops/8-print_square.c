#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_square -a function that prints a square using '#'
 *
 * @size: size of the square
 * @i
 * @k
 *
 * Return: void
 */
void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
