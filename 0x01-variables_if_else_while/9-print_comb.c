#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 9)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar(x + '0');
	return (0);
}
