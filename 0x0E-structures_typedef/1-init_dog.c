#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes dog
 *
 * @d: the dog to initialize
 * @name: the dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
