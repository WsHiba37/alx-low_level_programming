#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: destination
 * @src - parameter checked
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
		if (*dest == '\0')
		{
			*dest = *src;
			src++;
		}
	}
	return (dest);
}
