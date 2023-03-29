#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: given integer
 */
void print_number(int n)
{
	int cpy = n, rev = 0;

	if (n == 0)
		_putchar(48);
	if (n < 0)
	{
		_putchar(45);
		cpy *= -1;
	}

	while (cpy != 0)
	{
		rev = (rev * 10) + (cpy % 10);
		cpy /= 10;
	}
	while (rev != 0)
	{
		_putchar((rev % 10) + 48);
		rev /= 10;
	}
}
