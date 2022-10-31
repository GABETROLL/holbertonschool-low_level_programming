#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to name of owner
 *
 * Description: container for basic description of a dog:
 * name, age and owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

