#include <stdio.h>

/**
 * swap_int - fucntion swaps values of two integers
 * @a: first var
 * @b : second var
 * Return 0
 */

void swap_int(int *a, int *b)
{
	/**Creates a temp value i to store "a" value*/

	int i = *a;
	*a = *b;
	*b = i;
}
