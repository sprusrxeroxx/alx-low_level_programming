#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, count, len;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

count = 0;
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len])
len++;
count += len + 1;
}
str = malloc(count *sizeof(char) + 1);
if (str == NULL)
return (NULL);

count = 0;
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len])
{
str[count] = av[i][len];
len++;
count++;
}
str[count] = '\n';
count++;
}
str[count - 1] = '\0';
return (str);
free(str);
}
