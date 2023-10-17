#include <stdio.h>
#include "main.h"

/**
 * strcpy - Copies a str
 * @dest: Destination
 * @src: source
 * Return: pointer > source
 */

char strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];

}
dest[i++] = '\0';
return (dest);
}

