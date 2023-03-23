#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isdigit - checks if the character is a digit (from 0 to 9)
 *
 * @c: character checked
 *
 * Return: 1 if it's a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
