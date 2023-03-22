#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: character checked
 *
 * Return: vslue of the last digit
 */
int print_last_digit(int i)
{
	int val;

	val = i % 10;
	if (val >= 0)
	{
		_putchar(val + '0');
		return (val);
	}
	else if (val < 0)
	{
		_putchar(-val + '0');
		return (-val);
	}
	return (0);
}

