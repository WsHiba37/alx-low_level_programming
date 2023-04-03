#include "main.h"
#include <stddef.h>

/**
 * *_strchr - a function that locates a character in a string
 * @s: pointer to a string
 * @c: character checked
 * Return: s if c exists, NULL if doesn't
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
