#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: int number of arguments
 * @argv: array of character pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
