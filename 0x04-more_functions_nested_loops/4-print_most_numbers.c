#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_most_numbers - a function that prints most numbers from 0 to 9
 *
 * @num
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
