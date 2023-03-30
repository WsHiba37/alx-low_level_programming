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
	int i = 0;
	int src_len = 0;
	
	while (src[i++])
	{
		src_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = src_len; i < n; i++)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
