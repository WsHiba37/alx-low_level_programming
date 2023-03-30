#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: destination
 * @src: source
 * @n: max of bytes copied
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
