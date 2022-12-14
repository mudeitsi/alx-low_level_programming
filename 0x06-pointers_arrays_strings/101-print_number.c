#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer
 * @n: the integer to print
 *
 * Description: prints an integer
 * Return: value of n
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
