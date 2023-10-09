#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	num = -1;

	while (num < 10)
	{
		num++;
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
