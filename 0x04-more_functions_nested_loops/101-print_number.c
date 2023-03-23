#include "main.h"

/**
 * print_number - print a integer n
 *
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar(45);
		x *= -1;
	}
	if (x / 10 != 0)
		print_number(x / 10);
	_putchar((x % 10) + 48);
}
