#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog struct
 * @d: a struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: The dog owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, double age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
