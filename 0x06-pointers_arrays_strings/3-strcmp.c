#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 
 *		zero if s1 == s2
 *		negative number if s1 < s2
 *		positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
