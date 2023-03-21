#include "main.h"

/**
 * print_last_digit - print last digit of integer
 *
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r > 0)
	{
		_putchar(r + 48);
		return (r);
	}
	_putchar(-r + 48);
	return (-r);
}
