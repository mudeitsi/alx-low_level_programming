#include "main.h"

/**
 * puts_half - puts the half of array
 * @str: var array
 * Return: Nothing
*/

void puts_half(char *str)
{
	int count = 0;
	int half;
	while (str[count] != '\0')
	{
		count++;
	}
	if ((count % 2) == 0)
	{		
	half = count / 2;
	
		while (str[half] != '\0')
		{	
		_putchar(str[half]);
		half++;
		}	
}
else
{
half = (count / 2) + 1;
while (str[half] != 0)
{
_putchar(str[half]);
half++;
}
}
_putchar(10);
}
