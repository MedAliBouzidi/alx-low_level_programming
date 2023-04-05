#include "main.h"

/**
 * verifier - verify if n power n == base
 *
 * @n: inputted integer
 * @base: integer
 *
 * Return: sqrt of base
 */
int verifier(int n, int base)
{
	if (n * n > base)
		return (-1);
	if (n * n == base)
		return (n);
	return (verifier(n + 1, base));
}

/**
 * _sqrt_recursion - return natural square root of a number
 *
 * @n: given integer
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (verifier(1, n));
}
