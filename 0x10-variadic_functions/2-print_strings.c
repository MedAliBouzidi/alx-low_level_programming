#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - sum of all its parameters
 *
 * @separator: character to separate the numbers
 * @n: number of parameters
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	while (i < n)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i++ != n - 1)
			printf("%s", separator);
	}

	va_end(ap);

	putchar('\n');
}
