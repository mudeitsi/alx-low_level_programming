#include "main.h"

/**
 * string_toupper - changes all lowercase letters in a string to uppercase
 *
 * @str: letters to check
 *
 * Return: uppercase letters
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
