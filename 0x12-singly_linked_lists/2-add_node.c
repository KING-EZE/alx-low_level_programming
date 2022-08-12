#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node
 * @head: first node address store
 * @str: duplictaed
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nude;
	int c;

	for (c = 0; str[c] != '\0';)
		c++;
	nude = malloc(sizeof(list_t));
	if (nude == NULL)
	{
		free(nude);
		return (NULL);
	}
	nude->str = strdup(str);
	if (nude->str ==  NULL)
	{
		free(nude);
		return (NULL);
	}
	nude->len = c;
	nude->next = *head;
	*head = nude;
	return (*head);
}
