#ifndef _MAIN_
#define _MAIN_

/**
 * struct dog - traits
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: Dog traits
 */

struct dog
{
	char *name;
	double age;
	char *owner;
};

/**
 * dog_t - Structure for storing dog info
 */

typedef dog dog_t;

void int_dog(struct dog *d, char *name, double age, char *owner);
void print_dog(struct dog *d);
#endif
