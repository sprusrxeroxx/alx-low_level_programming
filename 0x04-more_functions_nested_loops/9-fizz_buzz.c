#include <stdio.h>

/**
 *main - prints out 100 numbers
 * replacing 3n && 5n with "fizz" and "buzz"
 *Return: 0
 */

int main(void)
{
int x;

for (x = 1; x <= 100; x++)
{
if (x % 3 == 0)
printf("Fizz ");
if (x % 5 == 0)
printf("Buzz ");
if (!(x % 3 == 0 | x % 5 == 0))
printf("%d ", x);
}
printf("\n");
return (0);
}
