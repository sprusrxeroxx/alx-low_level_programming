#include "main.h"

/**
 * _strcat - joins two strings
 * @str1: 1st string
 * @str2: 2nd string
 * Return: pointer to joined string
 */

char *_strcat(char *dest, char *src) 
{
	int i = 0 , len = 0; 
	while(dest[i++])
		len++;
	for(i = 0; i < src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
