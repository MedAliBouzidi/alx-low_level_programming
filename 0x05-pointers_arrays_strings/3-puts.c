#include "main.h"

/**
 * _puts - print a string
 *
 * @str: pointer to string to print
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l))
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
