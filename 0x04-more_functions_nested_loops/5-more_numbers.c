#include "main.h"

/**
 * more_numbers - print 10 times from 0 to 14
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 48; c <= 62; c++)
		{
			if (c <= 57)
				_putchar(c);
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
