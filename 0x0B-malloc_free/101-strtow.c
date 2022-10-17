#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * helper - helps function
 * @word: wordcount
 * @len: length
 * @str: string to go through
 * @s: array you are assigning
 * Return: char value
 */

char **helper(int word, int len, char *str, char **s)
{
	int x, y, z;

	z = 0;
	for (x = 0; x < word; x++)
	{
		y = 0;
		for (; z < len; z++)
		{
			if (str[0] != ' ' || str[z] != ' ')
			{
				s[x][y] = str[z];
				y++;
			}
			if (z != 0 && str[z] == ' ' && str[z - 1] != ' ')
			{
				z++;
				break;
			}
		}
		s[x][y + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}

/**
 * strtow - string to words
 * @str: string to check
 * Return: return char value
 */

char **strtow(char *str)
{
	int len, x, z, size, y, word;
	char **s;

	if (str == NULL)
		return (NULL);
	len = 0;
	word = 0;
	while (str[len] != '\0')
	{
		if (str[0] != ' ')
		word++;
		if (str[len] != ' ' && str[len - 1] == ' ' && len != 0)
			word++;
		len++;
	}
	s = (char **)malloc(sizeof(char *) * word + 1);
	if (s == NULL)
		return (NULL);
	z = 0;
	for (x = 0; x < word; x++)
	{
		size = 0;
		for (; z < len; z++)
		{
			if (str[0] != ' ' || str[z] != ' ')
				size++;
			if (str[z] == ' ' && size > 0)
				break;
		}
		printf("%d\n", size);
		s[x] = (char *)malloc(sizeof(char) * size + 1);
		if (s[x] == NULL)
		{
			for (y = x - 1; y >= 0; y--)
				free(s[y]);
			free(s);
		}
	}
	s = helper(word, len, str, s);
	return (s);
}
