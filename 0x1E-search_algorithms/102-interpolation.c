#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 *	otherwise, -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, st, e;
	double f;

	if (array == NULL || size == 0)
		return (-1);

	st = 0;
	e = size - 1;

	while (size)
	{
		f = (double)(e - st) / (array[e] - array[st]) * (value - array[st]);
		pos = (size_t)(st + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			st = pos + 1;
		else
			e = pos - 1;

		if (st == e)
			break;
	}

	return (-1);
}
