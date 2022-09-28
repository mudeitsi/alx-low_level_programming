#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: character to check for
 *
 * Return: a pointer to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
