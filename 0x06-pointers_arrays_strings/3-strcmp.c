#include "main.h"
#include <stdio.h>

/**
 *_strcmp - compares 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: s1 - s2 or 0
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2++)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
}
return (*s1 - *s2);
}
