
#include <stdio.h>
/**
 * main - prints out all arguments typed by user
 * @argc: no of elements in argv
 * @argv: Vector arr
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
