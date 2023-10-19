#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverses an int arr
 *@a: array
 *@n: number of elements
 *Return: 0
 */

void reverse_array(int *a, int n)
{
int i, j;
int tmp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
