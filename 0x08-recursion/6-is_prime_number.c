#include "main.h"

/**
 * verifier - verify if n is prime
 *
 * @i: iterator
 * @n: number to checks
 *
 * Return: 1 if n is prime else 0
 */
int verifier(int i, int n)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	if (n > i)
		return (verifier(++i, n));
	return (1);
}

/**
 * is_prime_number - checks if number is prime or not
 *
 * @n: number to checks
 *
 * Return: 1 if n is prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (verifier(2, n));
}
