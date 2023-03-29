#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: destination
 * @src: string concatenated
 * @string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *string = dest;

	while (*string != '\0')
	{
		string++;
	}
	while (*src != '\0')
	{
		*src = *string;
		string++;
		src++;
	}
	return (dest);
}
