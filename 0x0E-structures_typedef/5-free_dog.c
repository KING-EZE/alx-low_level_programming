#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dogs
 * @d: pointer to the dog to be freed.
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
