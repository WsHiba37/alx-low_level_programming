#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array of character pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, len = 0;

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] != '\0')
			len++;
	}
	printf("%d\n", len - 1);
	return (0);

}
