#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: fixed parameter
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int s;

	if (n == 0)
		return (0);

	va_start(ap, n);

	i = s = 0;
	while (i++ < n)
		s += va_arg(ap, int);

	va_end(ap);

	return (s);
}
