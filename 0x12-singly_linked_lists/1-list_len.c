#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *i = h;
	size_t j = 0;

	while (i != NULL)
	{
		i = i->next;
		j++;
	}
	return (j);
}
