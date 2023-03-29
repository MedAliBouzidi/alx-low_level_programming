#include "main.h"

/**
 * *infinite_add - add two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of buffer r
 *
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int in1 = 0, in2 = 0, d = 0, i, l, f, s;

	while (*(n1 + in1))
		in1++;

	while (*(n2 + in2))
		in2++;

	l = (in1 > in2) ? in1 : in2;

	if (l + 1 > size_r)
		return (0);

	r[l] = '\0';

	i = l - 1;

	while (i >= 0)
	{
		in1--;
		in2--;
		f = (in1 >= 0) ? n1[in1] - 48 : 0;
		s = (in2 >= 0) ? n2[in2] - 48 : 0;
		r[i] = ((f + s + d) % 10) + 48;
		d = (f + s + d) / 10;
		i--;
	}

	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + 48;
	}

	return (r);
}
