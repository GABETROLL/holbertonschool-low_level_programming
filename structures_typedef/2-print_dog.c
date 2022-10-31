#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints all of *d's attributes in
 * "Attribute_name: value\n" format.
 * @d: pointer to dog structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (dog != NULL)
	{
		if (d->name == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

