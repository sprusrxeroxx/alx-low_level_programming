#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: 0 or pointer
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, len = 0;
char *str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
len = i + j;

str = malloc(sizeof(char) * len + 1);
j = 0;
while (k < len)
{
if (k <= i)
{
str[k] = s1[k];
}
if (k >= i)
{
str[k] = s2[j];
j++;
}
k++;
}
str[k] = '\0';
return (str);
free(s);
}

