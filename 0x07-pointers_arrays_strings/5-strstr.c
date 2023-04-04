#include "main.h"

/**
 * *_strstr - function that finds the first occurence of the substring
 * @haystack: string to be scanned
 * @needle: string to be searched within the haystack string
 * Return: pointer to the first occurence of needle or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
