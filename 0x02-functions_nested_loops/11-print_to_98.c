#include "main.h"

/**
 * print_to_98 - print all numbers from n to 98
 *
 * @n: starter number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i<99; i++)
	{
		if (i <= 9)
		{
			_putchar(i + 48);
		}
		else
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		if(i != 98)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('\n');
}

