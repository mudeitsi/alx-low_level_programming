#include "lists.h"

/**
 * sum_listint - returns the sum of all the data, n, of a listint_t linked list
 * @head: pointer to the first node of linked list
 * Return: sum of all the data, n, of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
