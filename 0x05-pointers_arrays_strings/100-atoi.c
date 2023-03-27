#include "main.h"

/**
 * _atoi - convert string into integer
 *
 * @s: pointer to string
 *
 * Return: the extracted number otherwise 0
 */
int _atoi(char *s)
{
	short found;
	int l, minus, final;

	l = found = final = 0;
	minus = 1;
	while (*(s + l))
	{
		if (*(s + l) == '-')
			minus *= -1;
		if (*(s + l) >= 48 && *(s + l) <= 57)
		{
			final *= 10; 
			final += (*(s + l) - 48);
			found = 1;
		}
		else if (found == 1)
			break;
		l++;
	}

	return (final * minus);
}
