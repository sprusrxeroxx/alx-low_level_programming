#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main prints the sign of a random number
 * Return:The return value is a "negative,positive or zero"
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	if (n < 0)
		printf("%d is negative", n);
	if (n == 0)
		printf("%d is zero", n);

	return (0);
}
