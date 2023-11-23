#include "main.h"

/**
 *flip_bits - counts number of bits to change 
 *@n: 1st number 
 *@m: 2nd number
 *Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bitcount = 0;
	unsigned long int idx;
	unsigned long int num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		idx = num >> i;
		if ( idx & 1)
			bitcount++;
	}
	return (bitcount)
}
