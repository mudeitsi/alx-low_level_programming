#include "main.h"
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
			_putchar(str[count]);
	}
			count++;
	}
_putchar(10);
}
