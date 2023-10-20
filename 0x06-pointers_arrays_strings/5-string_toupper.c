#include "main.h"
#include <stdio.h>

/**
 * string_toupper - capitalizes all letter in s
 * @string: a string
 * Return: capped letters
 */

char *string_toupper(char *string)
{
int i = 0;
while (string[i])
{
if (string[i] >= 'a' && string[i] <= 'z')
string[i] -= 32;
i++;
}
return (string);
}
