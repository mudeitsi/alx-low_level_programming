#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to string
 * 
 * Description: function that returns a pointer to
 * a newly allocated memory containing copy of
 * string given as a parameter
 * @str: string to copy
 * Return: char to newly duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *v;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	v = malloc(sizeof(char) * c + 1);

	if (v == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		v[i] = str[i];

	return (v);
}
