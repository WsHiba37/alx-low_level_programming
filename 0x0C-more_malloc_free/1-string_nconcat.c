#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: destination
 * @s2: source
 * @n: unsigned integer
 * Return: pointer, otherwise s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len2 = n;
	unsigned int s1_len, s2_len;
	unsigned int i, j;

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (len2 >= s2_len)
	{
		len2 = s2_len;
		str = malloc((s1_len + len2 + 1) + sizeof(char));
	}
	else
		str = malloc((s1_len + n + 1) + sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		str[s1_len + j] = s2[j];
	}
	str[s1_len + j] = '\0';
	return (str);
}

























