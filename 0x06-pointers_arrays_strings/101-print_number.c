#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: given integer
 */
void print_number(int n)
{
	unsigned int cpy = n;

	if (n < 0)
	{
		_putchar(45);
		cpy *= -1;
	}

	if (cpy / 10)
		print_number(cpy / 10);
	_putchar((cpy % 10) + 48);
}
