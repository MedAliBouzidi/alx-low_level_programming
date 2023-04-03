#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diwgonals
 * of a square matrix of integers
 *
 * @a: array
 * @size: size of array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	i = s1 = s2 = 0;
	while (i < size)
	{
		s1 += *(a + (i * size + i));
		s2 += *(a + (i * 2 + size - 1));
		i++;
	}

	printf("%d, %d\n", s1, s2);
}
