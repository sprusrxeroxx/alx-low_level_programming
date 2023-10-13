#include "main.h"

/**
 * more_numbers - matrix
 * Return: no return
 */

void more_numbers(void)
{

int x, y;
x = 1;
y = 0;
	while (x <= 10)
	{
		while (y <= 14)
		{
			if (y >= 10)
			_putchar('1');
			_putchar(y % 10 + '0');
			y++;
		}
			_putchar('\n');
		}
	x++;
}
