#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at index od a dlistint_t list
 * @head: head of the list
 * @index: the index of the nth element
 * Return: 1 if success and -1 if faliure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *a;
	unsigned int i;

	h = *head;
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	i = 0;
	while (h != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				a->next = h->next;
				if (h->next != NULL)
					h->next->prev = a;
			}
			free(h);
			return (1);
		}
		a = h;
		h = h->next;
		i++;
	}
	return (-1);
}
