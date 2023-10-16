#include <stdio.h>

/**
 * _strlen - Write a function that returns the length of a string
 * @str: 1st var
 * Return: 0
 */

int _strlen(char *str)
{
int count;
count = 0;

while (str[count] != '\0')
{
count++;
}
return (count);
}
