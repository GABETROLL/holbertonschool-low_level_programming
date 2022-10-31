#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates and returns a new dog_t
 * with all the parameters as attributes with equal names.
 *
 * @name: name attribute of the returned dog_t.
 * @age: age attribute of the returned dog_t.
 * @owner: owner attribute of the returned dog_t.
 *
 * Return: created dog_t with all parameters as attributes,
 * if possible, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *result;
	char *name_copy;
	char *owner_copy;

	result = malloc(sizeof(dog_t));
	if (result == NULL)
	{
		return (NULL);
	}

	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(result);
		return (NULL);
	}

	result->name = name_copy;

	result->age = age;

	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(result);
		return (NULL);
	}

	result->owner = owner_copy;

	return (result);
}

