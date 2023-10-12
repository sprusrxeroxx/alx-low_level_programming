#include "main.h"
#include <stdio.h>
/**
 * _isupper - reads if c is a cap or not
 * @c : parameter we are checking
 *
 * Return : 0 or 1 
 */
char c;

char c = "W";

int _isupper(c)
{	if ( c>= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
