#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * @m: Dimension
 * @s: size
 * Return: 0 or the sum fo diags
 */
void print_diagsums(int *m, int s)
{
int i, j, sum0 = 0, sum1 = 0;

for (i = 0; i <= (s * s); i += s + 1)
{
sum0 += m[i];
}
for (j = s - 1; j <= (s * s) - s; j += s - 1)
{
sum1 += m[j];
}
printf("%d,%d\n", sum0, sum1);
}
