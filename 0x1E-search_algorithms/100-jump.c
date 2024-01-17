#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is located
 *	otherwise, -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i, m, k, prv;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = i = 0;
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		k++;
		prv = i;
		i = k * m;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", prv, i);

	while (prv <= i && prv < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[prv]);
		if (array[prv] == value)
			return (prv);
		prv++;
	}
	return (-1);
}
