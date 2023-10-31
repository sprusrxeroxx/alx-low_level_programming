#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str: a string
 *Return: 0 or a pointer
 */

char *_strdup(char *str)
{
char *ptr;
unsigned int len = 1; 
unsigned int i;

if (str == NULL)
{
return NULL;
}
while (str[len])
{
    len++;
}
ptr = malloc((sizeof(char) * len) + 1);
if (ptr == 0)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
ptr[i] = str[i];
}
ptr[i] = '\0';
return (ptr);
free(ptr);
}
