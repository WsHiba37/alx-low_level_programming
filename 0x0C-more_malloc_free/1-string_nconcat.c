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
	unsigned int s1_len, s2_len;
	unsigned int i, j;

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (n >= s2_len)
		str = malloc((s1_len + s2_len + 1) + sizeof(char));
	else if (n <= s2_len)
		str = malloc((s1_len + n + 1) + sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++)
	{
		if (n >= s2_len)
			str[s1_len + j] = s2[j];
		else if (j <= n)
			str[s1_len + j] = s2[j];
	}
	return (str);
}

























