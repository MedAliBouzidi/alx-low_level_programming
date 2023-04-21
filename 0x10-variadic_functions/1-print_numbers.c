#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - sum of all its parameters
 *
 * @separator: character to separate the numbers
 * @n: number of parameters
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i++ != n - 1)
			printf("%c", *separator);
	}

	va_end(ap);

	putchar('\n');
}
