
#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: reference str
 *@accept: str to check
 *Return: a whole number
 */
unsigned int _strspn(char *s, char *accept)
{
char *p1 = s;
char *p2 = accept;

while (*p1 && *p2)
{
if (*p1 != *p2)
{
break;
}
p1++;
p2++;
}
return (p1 - s);
}
