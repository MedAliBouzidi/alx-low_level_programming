#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * @grid: grid to frees
 * @height: grid height
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int h, w;

	h = w = 0;
	while (h < height)
	{
		free(*(grid + h));
		h++;
	}
	free(grid);
}
