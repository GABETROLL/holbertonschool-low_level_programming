#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated by making
 * a dog_t using the new_dog function
 * in file 4.
 *
 * @d: pointer to dog that would be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

