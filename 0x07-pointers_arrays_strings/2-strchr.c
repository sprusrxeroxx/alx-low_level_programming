#include <string.h>
#include "main.h"
/**
 *_strchr - Locates a character in a string
 *@s: string to be checked
 *@c: character searched for
 *Return: Null or s
 */
char *_strchr(char *s, char c)
{
while (*s != '\0' && *s != c)
{
s++;
}
if (*s == c)
{
return ((char *)s);
}
else
{
return (NULL);
}
}
