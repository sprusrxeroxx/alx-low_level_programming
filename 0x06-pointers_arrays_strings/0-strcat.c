#include "main.h"
#include <stdio.h>

/**
 * _strcat - joins two strings
 * @str1: 1st string
 * @str2: 2nd string
 * Return: pointer to joined string
 */

char *_strcat(char *str1, char *str2) 
{

  // Concatenate the two strings using a loop
  char *str3[100];
  int i = 0;
  int j = 0;
  while (str1[i] != '\0') {
    *str3[j] = str1[i];
    i++;
    j++;
  }

  i = 0;
  while (str2[i;
}
