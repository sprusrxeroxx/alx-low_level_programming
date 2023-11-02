
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *verify_num - checks if str is dgt
 *@str: a string
 *Return: 0
 */
int verify_num(char *str)
{
	unsigned int count;

	count =0;
	while (count < strlen(str))
	{
		if (!(isdigit(str[count])))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 *main - returns CLA addtion typed
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, conv, res;

	i = 1;
       	sum = 0;
	while (i < argc)
	{
		if (verify_num(argv[count])
		{
		conv = atoi(argv[count]);
		res += conv;
		}

		else
		{
		printf("Error\n");
		return (1);
		}
		i++;
	}
	printf("%d\n", res);
	return (0);
}
