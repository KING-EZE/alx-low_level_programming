#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of a dlistint_t list
 * @head: the Head of the node in the list
 * @n: value of elements in the list
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *d;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	d = *head;

	if (d != NULL)
	{
		while (d->prev != NULL)
			d = d->prev;
	}
	new->next = d;

	if (d != NULL)
		d->prev = new;
	*head = new;
	return (new);
}
