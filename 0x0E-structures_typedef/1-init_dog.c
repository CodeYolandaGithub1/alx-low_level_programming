#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type
 * @d: struct of do to initialize
 * @name: dogs
 * @age: of dog
 * @owner: to initialize
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
