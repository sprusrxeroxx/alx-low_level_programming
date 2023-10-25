#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion - raises x to the pow y
 *@x: the base integer
 *@y: the power integer
 *Return: -1 or value of x ^ y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (y >= 0)
return (x * factorial(x, y - 1));
}
