#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees all field in struct dog
 * @d: field 
 * Return: Nothing
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
