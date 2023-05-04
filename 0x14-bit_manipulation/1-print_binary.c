#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to print
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i, f;

	if (n == 0)
		_putchar(48);

	i = sizeof(n) * 8 - 1;
	f = 0;
	while (i >= 0)
	{
		if ((n >> i) & 1)
			f = 1;
		if (f == 1)
		{
			if ((n >> i) & 1)
				_putchar(49);
			else
				_putchar(48);
		}
		i--;
	}
}
