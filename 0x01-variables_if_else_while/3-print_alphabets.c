#include <stdio.h>

/**
 * main - Prints alphabets in lower and uppercase.
 *
 * Return: Always 0.
 */
int main(void)
	{
	char l;
	char l2;

	l = 'a';
	l2 = 'A';


	while (l <= 'z')
	{
	putchar(l);
	l++;
	}
	while (l2 <= 'Z')
	{
	putchar(l2);
	l2++;
	}
	putchar('\n');

	return (0);
}
