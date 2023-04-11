#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer to str, otherwise NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	if (str == NULL)
		return (NULL);
	ptr = (char *) malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

