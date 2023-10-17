#include "main.h"

/**
 * rev_string - a function which rev strs
 * @s: str to be tested
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0, y = 0;
	char _;

	while (s[y++])
	{
		x++;
	}
	for (y = x - 1; y >= x / 2; y--)
	{
		_ = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = _;
	}
}
