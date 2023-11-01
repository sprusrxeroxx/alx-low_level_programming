
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
if (argc < 2) 
{
return (0);
printf("\n");
}

int sum = 0;

for (int i = 1; i < argc; i++) 
{
int number = atoi(argv[i]);
if (number > 0) 
{
sum += number;
}
else
{
return (1);
break
}
}
return (0);
}
