#include "main.h"

/**
 *_puts - PRINTS A STR FOLLOWED BY \n 
 *@str: String var
 *Returns: 0
 */

void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

