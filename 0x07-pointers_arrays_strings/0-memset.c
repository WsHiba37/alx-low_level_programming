#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s
 * @b
 * @n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}
