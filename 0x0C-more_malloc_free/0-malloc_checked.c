#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: size
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
