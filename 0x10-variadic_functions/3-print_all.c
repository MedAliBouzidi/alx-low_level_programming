#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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

void print_int(va_list l, char *sep);
void print_ch(va_list l, char *sep);
void print_str(va_list l, char *sep);
void print_fl(va_list l, char *sep);

/**
 * print_all - sum of all its parameters
 *
 * @format: format of the printed string
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list l;
	int i, j;
	char *s;
	type_t f[] = {
		{"c", print_ch},
		{"i", print_int},
		{"f", print_fl},
		{"s", print_str},
		{NULL, NULL}
	};
	
	i = 0, s = "";

	va_start(l, format);

	while (format != NULL && *(format + i))
	{
		j = 0;
		while (j < 8)
		{
			if (*(format + i) == f->c[j++])
			{
				(*(f + (j / 2))->ff)(l, s);
				s = ", ";
			}
		}
		i++;
	}

	va_end(l);

	putchar('\n');
}

/**
 * print_int - prints int
 *
 * @l: arguement of list
 * @s: seperator
 *
 * Return: Nothing
 */
void print_int(va_list l, char *s) { printf("%s%d", s, va_arg(l, int)); }

/**
 * print_ch - prints char
 *
 * @l: arguement char
 * @sep: seperator
 *
 * Return: Nothing
 */
void print_ch(va_list l, char *sep) { printf("%s%c", sep, va_arg(l, int)); }

/**
 * print_str - prints string
 *
 * @sep: seperator
 * @l: list to print
 *
 * Return: Nothing
 */
void print_str(va_list l, char *sep)
{
	char *s;

	s = va_arg(l, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s%s", sep, s);
}

/**
 * print_fl - prints floats
 *
 * @sep: float to print
 * @l: next arguement of list to print
 *
 * Return: Nothing
 */
void print_fl(va_list l, char *sep) { printf("%s%f", sep, va_arg(l, double)); }
