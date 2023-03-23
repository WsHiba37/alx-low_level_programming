#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_diagonal - prints diagonals in the terminal
 *
 * @n: number of diagonals printed
 * @i
 * @j
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');

		}
		_putchar(92);
		_putchar('\n');
	}
}
