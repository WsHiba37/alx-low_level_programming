#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isupper - checks if the character is uppercase or lowercase
 *
 * @c: character checked
 *
 * Return: 1 if it's uppercase, Otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
