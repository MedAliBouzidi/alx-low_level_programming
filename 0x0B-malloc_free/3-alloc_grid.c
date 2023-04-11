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
	int **g, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);
	if (g == NULL)
		return (NULL);

	w = h = 0;
	while (h < height)
	{
		*(g + h) = malloc(sizeof(int) * width);
		if (*(g + h) == NULL)
		{
			while (--h >= 0)
				free(*(g + h));
			free(g);
			return (NULL);
		}
		while (w < width)
		{
			*(*(g + h) + w) = 0;
			w++;
		}
		h++;
	}
	return (g);
}
