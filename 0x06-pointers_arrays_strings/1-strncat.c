#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes from src
 * Return: string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
