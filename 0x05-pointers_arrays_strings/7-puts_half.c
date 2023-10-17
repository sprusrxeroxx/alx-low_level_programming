#include "main.h"

/**
 * puts_half - prints half the chars of str
 * @str: str to test
 * Return: void
 */

void puts_half(char *str)
{
int k = 0;
int j;

while (str[k] != '\0')
{
k++;
}
if (k % 2 == 1)
{
j = (k - 1) / 2;
j += 1;
}
else
{
j = k / 2;
}
for (; j > k; k++)
{
_putchar(str[j]);
}
_putchar('\n');
}
