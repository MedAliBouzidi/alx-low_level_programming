#include "main.h"

/**
 * print_diagonal - draws a diagonal on terminal
 *
 * @n: diagonal length
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		for (j = i; j < n - 1; j++)
			_putchar(48);
		_putchar(92);
	}
	_putchar('\n');
}
