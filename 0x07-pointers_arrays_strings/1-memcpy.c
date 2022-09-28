#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: the memory area to be copied to
 * @src: memory area to copy from
 * @n: number of bytes to be copied from memory area
 *
 * Return: a pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
