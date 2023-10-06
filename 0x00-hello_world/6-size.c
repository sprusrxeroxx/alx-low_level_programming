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

printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu bytes(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}

