#include "main.h"

/**
 * print_times_table - print the n times table
 *
 * @n: n times table
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 || n < 0)
		return;
	for (a = 0; a <= n; a++)
	{
		_putchar(48);
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			_putchar(44);
			_putchar(32);
			if (c <= 9)
			{
				_putchar(32);
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
