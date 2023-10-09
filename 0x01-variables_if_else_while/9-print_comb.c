#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	num = 0;
	do {
	putchar((num % 10) + '0');
	putchar(',');
	putchar(' ');
	num++;
	}
	while (num < 10);

	putchar('\n');

	return (0);
}
