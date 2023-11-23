#include <stdio.h>
#include "main.h"

/**
 * print_binary - converts a number to binary
 * @n: a unsigned integer
 * Return: a binary or 0
 */

void print_binary(unsigned long int n)
{
	int bit;

	for (bit = sizeof(n) * 8 - 1; bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
		{
			_putchar("1");
		}
		else
		{
			_putchar("0");
		}
	}
}
