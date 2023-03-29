#include "main.h"

/**
 * reverse_array - reverse the content of an array of integer
 *
 * @a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, mid = n / 2, l = n - 1, tmp;

	while (i < mid && l > mid)
	{
		tmp = a[i];
		a[i] = a[l];
		a[l] = tmp;
		i++;
		l--;
	}
}
