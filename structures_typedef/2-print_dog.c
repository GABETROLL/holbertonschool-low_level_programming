#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints all of *d's attributes in
 * "name: value\n" format.
 * @d: pointer to dog structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}

