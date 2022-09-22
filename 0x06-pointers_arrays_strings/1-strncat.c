#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: string that is added to
 * @src: string to be appended
 * @n: amount of times to append
 *
 * Return: newly concertenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
