#include "main.h"

/**
 * times_table - print 9 time table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48 ; b <= 58; b++)
		{
			_putchar(a * b);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
