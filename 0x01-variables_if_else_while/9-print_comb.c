#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 1;

	putchar('0');
	while (x <= 9)
	{
		putchar(',');
		putchar(' ');
		putchar(x + '0');
		x++;
	}
	putchar(x + '0');
	return (0);
}
