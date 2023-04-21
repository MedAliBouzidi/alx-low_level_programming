#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - Struct type format
 *
 * @t: type format
 * @ff: function associated
 *
 */
typedef struct type
{
	char *c;
	void (*ff)(va_list l, char *sep);
} type_t;

#endif
