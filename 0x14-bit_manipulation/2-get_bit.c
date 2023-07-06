#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: index of the wanted bit
 *
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
		return (-1);
	else
		return ((int)(n >> index) & 1);
}
