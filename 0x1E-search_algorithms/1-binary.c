#include "search_algos.h"

void print_array(int *array, int size);

/**
* binary_search - searches for a value in a sorted
* array of integers using the Binary search algorithm
*
* @array: array to be searched
* @size: size of the array
* @value: value to search for
*
* Return: the index where value is located
*	otherwise, return -1
*/
int binary_search(int *array, size_t size, int value)
{
	int start, end, mid;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid =  start + (end - start) / 2;
		print_array(array + start, end - start + 1);
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
	}

	return (-1);
}

/**
 * print_array - print an array
 *
 * @array: array to print
 * @size: size of array
 *
 * Return: Nothing
 */
void print_array(int *array, int size)
{
	int i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i + 1 != size)
			printf(",");
	}
	printf("\n");
}
