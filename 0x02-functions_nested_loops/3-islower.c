#include "main.h"

/**
 * _islower - checks if the character is lowercase
 *
 * @c: the character to be checked
 *
 * Return: 1 (if it's lowercase) or 0 (if it's not)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

