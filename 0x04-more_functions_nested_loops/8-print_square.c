#include "main.h"

/**
 * print_square - draws square
 *
 * @size: the size square
 */
void print_square(int size)
{
	int i,j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
