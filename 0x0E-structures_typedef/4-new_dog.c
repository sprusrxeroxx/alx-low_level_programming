#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog -  creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Name of owner
 * Return: Null or copies of dog and owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *all_dogs;
	int name_len = 0, own_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		own_len = _strlen(owner) + 1;
		all_dogs = malloc(sizeof(dog_t));

		if (all_dogs == NULL)
			return (NULL);

		all_dogs->name = malloc(sizeof(char) * name_len);

		if (all_dogs->name == NULL)
		{
			free(all_dogs);
			return (NULL);
		}

		all_dogs->owner = malloc(sizeof(char) * own_len);

		if (all_dogs->owner == NULL)
		{
			free(all_dogs->name);
			free(all_dogs);
			return (NULL);
		}

		all_dogs->name = _strcpy(all_dogs->name, name);
		all_dogs->owner = _strcpy(all_dogs->owner, owner);
		all_dogs->age = age;
	}

	return (all_dogs);
}

/**
 * _strlen - returns the len of a str
 * @s: string
 * Return: String len
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

/**
 * _strcpy - copies str
 * @dest: copy str
 * @src: original str
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	dest[b++] = '\0';
	return (dest);
}
