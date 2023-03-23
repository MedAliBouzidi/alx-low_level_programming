#include "main.h"

/**
 * print_line - print line of length n
 *
 * @n: length of the line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
