
#include <stdio.h>
/**
 * main - prits out the name of the function
 * @argc: no of elements in argv
 * @argv: Vector arr
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc > 1)
{
printf("%s\n", argv[1]);
}
else
printf("%s\n", argv[0]);
return (0);
}
