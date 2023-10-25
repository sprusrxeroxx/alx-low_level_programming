#include <stdio.h>
#include "main.h"

/**
 *factorial - computes n! of a number
 *@n: an integer > 0
 *Returns : -1 or greater
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	 return (1);
return (n*factorial(n - 1));
}
