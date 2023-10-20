#include "main.h"
#include <stdio.h>

/**
 * string_toupper - capitalizes all letter in s
 * @string: a string
 * Return: capped letters
 */

char *string_toupper(char *string)
{
while (*string != '\0')
{
if (*string >= 'a' && *string <= 'z')
{
*string -= 32;
}
string++;
}
return (string);
}
