#include <stdio.h>

/**
 * main - Printing base 10 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + 48);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	return (0);
}
