#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 * and initializes it with a specific char
 *@size: size of the array to be created
 *@c: Character to be printed
 *Return: NULL or s
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0)
{
return (NULL);
}
ptr = malloc(sizeof(char) * size);
if (ptr == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}

