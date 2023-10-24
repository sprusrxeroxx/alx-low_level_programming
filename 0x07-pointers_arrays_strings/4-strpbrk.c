#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string to be searched
 *@accept: bytes to check for
 *Return: pointer or 0
 */
char *_strpbrk(const char *s, const char *accept)
{
const char *p1 = s;
const char *p2 = accept;
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
