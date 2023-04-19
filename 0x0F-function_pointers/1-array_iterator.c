#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 *
 * @array: array of integers
 * @size: size of array
 * @action: function to executes on each element of array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;

	while (i < size)
		(*action)(*(array + i++));
}
