#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a listint_t list
 * @head: double pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 * Return: the address of new node 
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
