#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	ptr = (char *) malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	for (k = 0; k <= j; k++)
	{
		ptr[k + i] = s2[k];
	}
	return (ptr);
}
