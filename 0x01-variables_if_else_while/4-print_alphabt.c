#include <stdio.h>

/**
 * main - Prints alphabets in lowercase expcept 'q' and 'e'
 *
 * Return: Always 0.
 */
int main(void)
{
char l;

l = 'a';
while (l <= 'z')
{
if (l != 'e' && l != 'q')
putchar(l);
l++;
}
putchar('\n');
return (0);
}
