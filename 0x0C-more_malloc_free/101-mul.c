#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success);
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int *ptr;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; argc < 3; i++)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				exit(98);
			}
			arg++;
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	ptr = malloc(2 * sizeof(int));
	if (ptr == NULL)
		exit(98);
	if (num1 > 0 && num2 > 0)
	{
		*ptr = num1 * num2;
		printf("%d\n", *ptr);
		free(ptr);
		return (0);
	}
	printf("Error\n");
	exit(98);
}

