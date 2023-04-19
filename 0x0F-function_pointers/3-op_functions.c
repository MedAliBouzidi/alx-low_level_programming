#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the sum of a and b
 */
int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - subtraction of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the difference of a and b
 */
int op_sub(int a, int b) { return (a - b); }

/**
 * op_mul - multiplication of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the product of a and b
 */
int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - division of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
