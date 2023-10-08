#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Short description, single line
 * Description: This program will assign a random number to the variable n
 * Return: Prints the last digit of a random number n
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lDigit;

	lDigit = n % 10;
	if (lDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lDigit);
	if (lDigit < 6 && lDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDigit);
	if (lDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lDigit);
	return (0);
}
