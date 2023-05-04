#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1
 *
 * Return: converted number, or 0 if:
 * - there is one or more chars in the string is not 0 or 1
 * - b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, m = 1;
	unsigned int n = 0;

	if (!*b || b == NULL)
		return (0);

	while (*(b + ++i))
		;
	
	i--;
	while (*(b + i))
	{
		if (*(b + i) != 48 && *(b + i) != 49)
			return (0);
		n += (*(b + i) - 48) * m;
		m *= 2;
		i--;
	}

	return (n);
}
