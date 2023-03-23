#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_triangle - a function that prints triangles in the terminal
 *
 * @size: size of the triangle
 * @i
 * @k
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = i; k < size; k++)
			{
				_putchar(' ');
			}

			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}
