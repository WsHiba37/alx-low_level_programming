#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
		if (*dest == '\0')
		{
			while (*src != src[n])
			{
				src++;
			}
			*dest = *src;
		}
	}
	return (dest);
}

