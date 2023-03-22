#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_sign - checks if an integer is positive or negative
 *
 * @n: character to be checked
 *
 * Return: 1 if it's positive, 0 if it's 0, -1 if it's negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
	return (0);
}
