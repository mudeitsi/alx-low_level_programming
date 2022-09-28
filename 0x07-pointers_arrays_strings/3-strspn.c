#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: the number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
			}
			j++;
		}
		j = 0;
		i++;
		if (s[i] == ' ')
		{
			break;
		}
	}
	return (count);
}
