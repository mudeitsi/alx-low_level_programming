#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: 1st argument int type
* @b: 2nd argument int type
*
* Description: Using pointer to change value of a and b
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
