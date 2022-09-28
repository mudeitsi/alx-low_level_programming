#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check needle
 * @needle: substring to find haystack
 *
 * Return: a pointer to the beginning of needle in haystack or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0';)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
	if (needle[j] == '\0')
	{
		return (&haystack[i]);
	}
	i++;
	}
	return ('\0');
}
