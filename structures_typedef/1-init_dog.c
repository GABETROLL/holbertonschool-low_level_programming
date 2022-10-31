#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes dog *d with it's name, age and owner name.
 * @d: pointer to dog struct that will be initialized
 * @name: pointer to name attribute of dog
 * @age: age to write in dog's age attribute
 * @owner: pointer to owner's name string to write in in
 * dog's owner attribute
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

