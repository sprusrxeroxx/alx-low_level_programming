#include <stdio.h>
#include "main.h"
/**
 *_memset - fills the first n bytes of the memory area
 *pointed to by s with the const byte b
 *@s: string to be changed
 *@b: constant byte
 *@n: number of bytes
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned char *p = (unsigned char *)s;

while (n-- > 0)
{
*p++ = b;
}
return (s);
}
