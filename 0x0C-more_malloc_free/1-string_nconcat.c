#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: NULL or a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, k = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n >= j)
		len = i + j;
	else
		len = i + n;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	j = 0;

	while (k < len)
	{
		if (k <= i)
			str[k] = s1[k];
		if (k >= i)
		{
			str[k] = s2[j];
			j++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
