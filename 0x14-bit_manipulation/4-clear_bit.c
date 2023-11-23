#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at idx
 * @n: input numbere
 * @index: index of given number
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
