
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out multiplication of 2 int
 * @argc: no of elements in argv
 * @argv: Vector arr
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int a, b;
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
else
printf("Error\n");
return (1);
}
