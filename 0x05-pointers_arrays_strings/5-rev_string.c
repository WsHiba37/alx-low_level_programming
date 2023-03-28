#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverse a string
 * @s: parameter checked
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char swap;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		swap = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = swap;
	}
}
