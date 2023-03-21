#include "main.h"

/**
 * jack_bauer - print every minute of day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int a, b = '0', c, d;

	for (a = '0'; a < '3'; a++)
	for (b = '0'; b <= '9'; b++)
	for (c = '0'; c < '6'; c++)
	for (d = '0'; d <= '9'; d++)
	{
		if (a >= '2' && b >= '4')
			break;
		_putchar(a);
		_putchar(b);
		_putchar(':');
		_putchar(c);
		_putchar(d);
		_putchar('\n');
	}
}
