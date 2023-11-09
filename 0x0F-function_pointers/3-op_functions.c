#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two integers
 * @a: int 1
 * @b: int 2
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: int 1
 * @b: int 2
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: int 1
 * @b: int 2
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mul - divides two integers
 * @a: int 1
 * @b: int 2
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of two integers
 * @a: int 1
 * @b: int 2
 * Return: a % b
 */

int op_mod(int a, int b)
{
        return (a % b);
}

