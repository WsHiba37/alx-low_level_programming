#include "main.h"

/**
 * *string_toupper - a function that changes a string to uppercase
 * @str: string
 * Return: ALways 0 (Success)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
