#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - a function that copies a string to the buffer pointed by dest
 * @src: source
 * @dest: destination
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
