#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: no of memebrs
 * @size: size
 * Return: 0 or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, len = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
