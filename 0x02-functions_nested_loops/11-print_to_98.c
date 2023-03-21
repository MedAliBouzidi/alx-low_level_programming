#include <stdio.h>
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

	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		for (i = n + 1; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n - 1; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	_putchar('\n');
}

