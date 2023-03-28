#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: string converted
 * Return: 0 (if they are no numbers in the string)
 */
int _atoi(char *s)
{
	int num, i;

	for (i = 0; i != '\0'; i++)
	{
		s++;
		for (num = 0; num < 10; num++)
		{
			if (*s == num)
				printf("%d", *s);
			else
				return (0);
		}
	}
	return (0);
}
