#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0, Error or result
 */
int main(int argc, char *argv[])
{
	int i, num, result;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		result = result + num;
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
