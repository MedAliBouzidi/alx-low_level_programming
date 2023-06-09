#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: base number
 * @m: number to transform to
 *
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, r;

	r = 0;
	i = 8 * sizeof(n) - 1;
	while (i >= 0)
	{
		if (((n ^ m) >> i) & 1)
			r++;
		i--;
	}
	return (r);
}
