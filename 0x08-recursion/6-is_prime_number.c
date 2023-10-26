#include <stdio.h>
#include "main.h"
/**
 *is_prime_number - determines if an int is prime or not
 *@n : input int
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
if (n == 2 || n == 3)
{
return (1);
}
if (n % 2 == 0)
{
return (0);
}
if (n % 3 == 0)
{
return (0);
}
if (n % 5 == 0 || n % (n / 5) == 0)
{
return (0);
}
return (1);
}

