#include "main.h"

/**
 * print_rev - print a string in revere
 *
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int l = 0;

	while (*(s + l))
		l++;
	l--;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
