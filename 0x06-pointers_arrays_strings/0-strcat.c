#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src
 * to the end of the string pointed to by @dest
 *
 * @dest: string that will be appended
 * @src: string to be concertenated upon
 *
 * Return: returns pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
