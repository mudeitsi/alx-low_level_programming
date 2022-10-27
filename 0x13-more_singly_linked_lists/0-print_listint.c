#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: struct listint_t type
 * Return: size_t number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
