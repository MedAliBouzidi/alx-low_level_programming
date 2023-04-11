#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **a, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	w = h = 0;
	while (h < height)
	{
		*(a + h) = malloc(sizeof(int) * width);
		if (*(a + h) == NULL)
			return (NULL);
		while (w < width)
		{
			*(*(a + h) + w) = 0;
			w++;
		}
		h++;
	}
	return (a);
}
