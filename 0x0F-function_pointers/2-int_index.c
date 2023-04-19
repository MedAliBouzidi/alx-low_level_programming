#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to array of integers
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function
 * does not return 0,
 * no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (++i < size)
	{
		if ((*cmp)(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
