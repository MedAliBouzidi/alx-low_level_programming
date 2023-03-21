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
	if (n < 98)
		for (; n < 98; n++)
			printf("%d, ", n);
	else
		for (; n > 98; n--)
			printf("%d, ", n);
	printf("%d\n", n);
}

