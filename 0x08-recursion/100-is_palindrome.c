#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *is_palindrome - function
 *@s: input
 *Return: 1 or 0
 */
int is_palindrome(char *str)
{
if (*str == '\0' || *(str + 1) == '\0')
{
return (1);
}
if (*str != *(str + strlen(str) - 1))
{
return (0);
}
return (is_palindrome(str + 1));
}
