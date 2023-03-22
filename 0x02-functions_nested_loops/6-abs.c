#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _abs - prints the absolute value
 *
 * @i: the character checked
 *
 * Return: the abs value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	return (0);
}
