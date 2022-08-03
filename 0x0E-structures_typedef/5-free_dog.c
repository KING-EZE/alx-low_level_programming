#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dogs
 * @d: pointer to the dog to be freed.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);

	free(d);
}
