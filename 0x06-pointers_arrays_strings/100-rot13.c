#include <stdio.h>
#include "main.h"
/**
 * rot13 - encodes a str in rot 13
 * @string: a string
 * Return: 0
*/

char *rot13(char *string)
{
for (int i = 0; string[i] != '\0'; i++)
{
if (string[i] >= 'a' && string[i] <= 'z')
{
string[i] = (string[i] - 'a' + 13) % 26 + 'a';
}
else if (string[i] >= 'A' && string[i] <= 'Z')
{
string[i] = (string[i] - 'A' + 13) % 26 + 'A';
}
}
return (string);
}
