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

	result = malloc(sizeof(dog_t));
	if (result == NULL)
	{
		return (NULL);
	}

	result->name = malloc(strlen(name) + 1);
	if (result->name == NULL)
	{
		free(result);
		return (NULL);
	}

	result->owner = malloc(strlen(owner) + 1);
	if (result->owner == NULL)
	{
		free(result->name);
		free(result);
		return (NULL);
	}

	strcpy(result->name, name);
	result->age = age;
	strcpy(result->owner, owner);

	return (result);
}

