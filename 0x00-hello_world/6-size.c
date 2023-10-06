#include <stdio.h>
/**
 * main - Prints "sizes of different data types
 *
 * Return: Always 0.
 */
int main(void)
{
int intType;
float floatType;
long long longlongType;
char charType;
long longType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
printf("Size of a long: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long: %zu byte(s)\n", sizeof(longlongType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

return (0);
}

