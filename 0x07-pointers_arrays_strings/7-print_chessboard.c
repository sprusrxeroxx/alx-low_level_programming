#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: input
 * Returns: a chessboard
 */
void print_chessboard(char (*a)[8])
{
for (int i = 0; i < 8; i++)
{
for (int j = 0; j < 8; j++)
{
_putchar( a[i][j]);
}
_putchar("\n");
}
}
