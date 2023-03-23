#include "main.h"

/**
 * print_triangle - draws a triangle with #
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
				_putchar(32);
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
