#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string to be searched
 *@accept: bytes to check for
 *Return: pointer or 0
 */
char *_strpbrk(char *s, char *accept)
{
char *p1 = s;
char *p2 = accept;
while (*p1)
{
if (*p1 == *p2)
{
return (p1);
}
p1++;
}
return (0);
}
