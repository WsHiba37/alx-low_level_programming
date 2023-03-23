#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_to_98 - prints numbers to 98
 *
 * @n: parameter checked
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 99)
	{
		if (n >= 98)
		{
			printf("%d", n);
			n--;
		}
		else if (n <= 98)
		{
			printf("%d", n);
			n++;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
