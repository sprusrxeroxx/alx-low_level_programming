#include <stdio.h>

/**
 * main - Short description, single line
 * Description: This program uses putchar function to print
 * Return: Prints the alphabet in lowercase
 */
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}

putchar('\n');
return (0);
}
