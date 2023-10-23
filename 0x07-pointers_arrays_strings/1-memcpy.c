#include <stdio.h>
#include "main.h"
/**
 *_memcpy - Copies n bytes from memory area src 
 * to memory area dest
 * @dest: return string
 * @src: copy string
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n) 
{
char *d = dest;
char *s = src;

while (n-- > 0)
{
*d++ = *s++;
}
return dest;
}
