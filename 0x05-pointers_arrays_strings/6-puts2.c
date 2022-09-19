#include "main.h"
#include <stdio.h>

/**
 * puts2 - Function which print %2 charracters
 * @str: var
 * Return: Nothing
*/

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			putchar(str[count]);
		}
			count++;
	}
putchar(10);
}
