#include "main.h"
#include <stdio.h>
/**
 *_strstr - locates a substring
 *@haystack: reference string
 *@needle: search string
 *Return: 0 or a pointer to substr
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *a = haystack;
char *b = needle;

while (*a == *two && *two != '\0')
{
a++;
two;
}
if (*b == '\0')
return (haystack);
}
return (NULL);
}
