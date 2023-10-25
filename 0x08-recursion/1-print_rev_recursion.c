#include <stdio.h>
#include "main.h"

/**
 *_print_rev_recursion - prints str in reverse
 *@s: a string
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
if (*s == '\0');
}
