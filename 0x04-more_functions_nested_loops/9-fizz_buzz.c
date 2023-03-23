#include <stdio.h>

/**
 * main - The Fizz-Buzz test
 *
 * @x
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 5 == 0 && x % 3 == 0)
	{
		printf(" FizzBuzz");
	}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (x == 1)
		{
			printf("%d", x);
		}
		else
		{
			printf(" %d", x);
		}

	}
	putchar('\n');
	return (0);
}
