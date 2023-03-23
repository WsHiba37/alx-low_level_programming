#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_numbers - a function that prints numbers from 0 to 9
 *
 * @num
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
