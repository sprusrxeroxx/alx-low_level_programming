#include "main.h"

/**
 *main - takes pointer to an  "int" as a parameter
 *and re-assigns it to "98"
 *
 *@n : an int
 *Returns: 0
 */

void reset_to_98(int *n)
{
int *p = &n;

*p = 98;
return (n);
}
