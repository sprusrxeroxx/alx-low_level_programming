#include "main.h"
#include <stdio.h>

/**
 *_strncat -joins two strings of parn
 *@dest: string appended on
 *@src: string appended to dest
 *@n: length of bytes to join
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, len = 0;

while (dest[i++])
len++;
for (i = 0; src[i] && i < n; i++)
dest[len++] = src[i];
return (dest);
}
