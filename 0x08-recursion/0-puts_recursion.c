#include "main.h"

/**
 * _puts_recursion - print a string 
 *
 * @s: string to print
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
