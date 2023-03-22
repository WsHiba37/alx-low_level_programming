#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * times_table - prints times table
 *
 * @x
 *
 * @y
 *
 * Return: void
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			printf("%d", x * y);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
