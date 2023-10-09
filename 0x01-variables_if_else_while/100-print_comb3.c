#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit_a, digit_b;

	for (digit_a = 0; digit_a < 9; digit_a++)
	{
		for (digit_b = digit_a + 1; digit_b < 10; digit_b++)
		{
			putchar((digit_a % 10) + '0');
			putchar((digit_b % 10) + '0');

			if (digit_a == 8 && digit_b == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
