#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - gives array of args
 * @ac: argument count
 * @av: array of arguments
 * Return: char value
 */

char *argstostr(int ac, char **av)
{
	int size;
	char *v;
	int x;
	int y;
	int z;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			size++;
	}

	size += (ac + 1);
	v = malloc(sizeof(char) * size);
	if (v == NULL)
		return (NULL);
	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			v[z] = av[x][y];
			z++;
		}
		v[z] = '\n';
		z++;
	}

	v[z] = '\0';

	return (v);
}
