#include <stdio.h>

/**
 * main - Printing all different comb of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';
	int y = '1';

	while ((x < 10) || (y < 10))
	{
		if (x < y)
		{
			putchar(x + '0');
			putchar(y + '0');
			y++;
		}
		else if (y == 9)
		{
		x = x + 1;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
