
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - prints minimum number of coins
 * @argc - arg counter
 * @argv - an array
 * Return: 0 or 1 
 */
int main(int argc, char *argv[])
{
int i, j, res;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	i = atoi(argv[1]);
	res = 0;
	if (i < 0)
	{
	printf("0\n");
	return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
	while (i >= change[j])
	{
	res++;
	i -= change[j];
	}
	}
	printf("%d\n", res);
	return (0);
}	
