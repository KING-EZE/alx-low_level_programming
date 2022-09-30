#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: the head of the nodes in the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((tmp = head) !=  NULL)
	{
		head = head->next;
		free(tmp);
	}
}
