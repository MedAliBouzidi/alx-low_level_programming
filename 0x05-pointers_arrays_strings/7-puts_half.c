#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int l = 0, i;

	while (*(str + l))
		l++;
	i = l / 2;
	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
