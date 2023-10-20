#include <stdio.h>
#include "main.h"
/**
 *encode_to_1337 - encodes a string into 1337.
 *@string: a string
 *Return: a string
 */

char *encode_to_1337(char *string)

while (*string != '\0')
{
if (*string == 'a')
{
*string = '4';
} else if (*string == 'e')
{
*string = '3';
}
else if (*string == 'g')
{
*string = '6';
}
else if (*string == 'i')
{
*string = '1';
}
else if (*string == 'o')
{
*string = '0';
}
else if (*string == 's')
{
*string = '5';
}
string++;
}
return string;
}
