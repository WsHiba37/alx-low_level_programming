#include <stdio.h>

/**
 * main - a program that prints its name
 * Return: Always 0 (Success)
 */
int main (int argc, char* argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
