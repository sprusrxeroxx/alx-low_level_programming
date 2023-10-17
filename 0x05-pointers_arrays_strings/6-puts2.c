#include "main.h"

/**
 * puts2 - printa other chars in str
 * @str: str used
 * Return: void
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
