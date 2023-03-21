#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isalpha - checks if the character is alphabetic or not
 *
 * @c: the character to be checked
 *
 * Return: 1 if it's an alphabet, Otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
