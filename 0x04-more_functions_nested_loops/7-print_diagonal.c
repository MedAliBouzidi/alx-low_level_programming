#include "main.h"

/**
 * print_diagonal - draws a diagonal on terminal
 *
 * @n: diagonal length
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		for (j = 0; j < i; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
