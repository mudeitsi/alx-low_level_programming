#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of size with char c
 * @size: size of array to create
 * @c: char type
 * Return: a pointer to the array or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	v = malloc(sizeof(char) * size);
	if (v == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		v[i] = c;

	return (v);
}
