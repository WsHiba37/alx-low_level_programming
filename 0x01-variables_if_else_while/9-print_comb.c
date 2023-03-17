#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	putchar('0');
	while (x < 10)
	{
		putchar(',');
		putchar(' ');
		putchar(x + '0');
		x++;
	}
	return (0);
}
