#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int y;
	int z;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = (int **)malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		x[y] = (int *)malloc(sizeof(int) * width);
		if (x[y] == NULL)
		{
			for (z = 0; z < y; z++)
			{
				free(x[z]);
			}
			free(x);
		}
	}

	for (y = 0; y < height; y++)
		for (z = 0; z < width; z++)
			x[y][z] = 0;

	return (x);
}
