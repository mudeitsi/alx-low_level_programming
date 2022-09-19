#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - reverse a string
*
* @s: string to print
*
* Description: prints a string in reverse order
*/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
