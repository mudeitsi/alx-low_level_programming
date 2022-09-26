#include "main.h"

/**
 * _memset - sets memory to array
 * @s: array to be set
 * @b: value to set array as
 * @n: n number of times
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
