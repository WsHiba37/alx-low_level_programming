#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_line - prints a line in the terminal using underscores
 *
 * @n: number of underscores printed
 * @i
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
