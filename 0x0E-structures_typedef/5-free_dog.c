#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 *
 * @d: ptr to the dog to be freed
 *
 * Return: nothing
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
