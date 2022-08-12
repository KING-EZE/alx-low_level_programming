#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
* add_node_end - add a new node at the end of `list_t` list
* @head: double pointer to head
* @str: string to duplicate into new node
* Return: Address of the new element or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *nude;
	int c;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (c = 0; str[c] != '\0'; c++)
		;

	nude = malloc(sizeof(list_t));
	if (nude == NULL)
	{
		free(nude);
		return (NULL);
	}
	nude->str = strdup(str);
	if (nude->str == NULL)
	{
		free(nude);
		return (NULL);
	}
	nude->len = c;
	nude->next = NULL;

	if (current)
		current->next = nude;
	else
		*head = nude;

	return (nude);

}
