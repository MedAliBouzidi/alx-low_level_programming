#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 *
 * @min: min value on array
 * @max: max value on array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a, l, i;

	if (min > max)
		return (NULL);

	l = max - min + 1;
	a = malloc(sizeof(*a) * l);
	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < l)
		*(a + i++) = min++;

	return (a);

}
