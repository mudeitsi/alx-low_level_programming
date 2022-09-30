#include "holberton.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - function that prints file name
 * @argc: count of the artguments supplied
 * @argv: an array of pointers to the strings
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
