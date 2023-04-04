#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string containing the character to match
 * Return: a pointer to the matched char of s, NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
