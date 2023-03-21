#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all the alphabets in lowercase
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
