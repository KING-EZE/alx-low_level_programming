#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the head of the list
 * @n: the value of the list elements
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	a = *head;
	new->n = n;
	new->next = NULL;
	if (a != NULL)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = a;

	return (new);
}
