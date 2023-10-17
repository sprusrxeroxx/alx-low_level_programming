#include <stdio.h>
#include "main.h"

/**
 * print_rev - printa a string in reverse
 *@str - the str rev
 *Returns 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	for (i -= 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
