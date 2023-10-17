#include <stdio.h>
#include "main.h"

/**
 * print_array - prints els of arrays
 * @a: an array to be tested
 * @n: length to be prntd
 *Return: void
 */

void print_array(int *a, int n)
{
int x;

for (x = 0 ; x < n ; x++)
{
printf("%d", a[x]);
if (x != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
