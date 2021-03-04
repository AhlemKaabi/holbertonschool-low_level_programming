#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
* free_grid - a function
* @grid: grid
* @height: height
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
