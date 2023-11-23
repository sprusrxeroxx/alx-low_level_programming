#include "main.h"


/**
 * set-it - sets the value of a bit to 1 at idx
 * @n: input number
 * @index: index to set bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bits = 1 << index;
	*n = *n | bits;
	return (1);
}
