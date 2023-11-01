#include "main.h"
#include <stdlib.h>

/**
 *strtow - splits a string into words
 * @str: string to split
 * Return: array of pointers to the words, or NULL if there was an error
 */
char **strtow(char *str)
{
char **words;
int wordcount, i, j;

if (str == NULL)
return (NULL);

for (wordcount = 0, i = 0; str[i] != '\0'; i++)
{
if (!str[i + 1] || str[i + 1] == ' ' ||
str[i + 1] == '\t' || str[i + 1] == '\n')
wordcount++;
}

words = malloc((wordcount + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; str[i] != '\0'; i++)
{
if (!str[i + 1] || str[i + 1] == ' ' ||
str[i + 1] == '\t' || str[i + 1] == '\n')
{
words[j] = str + i - j;
j++;
}
}
words[j] = NULL;
return (words);
}
