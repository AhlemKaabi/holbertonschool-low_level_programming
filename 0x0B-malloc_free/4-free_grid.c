#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
* alloc_grid - unction that returns a
* pointer to a 2 dimensional array of integers.
* @width: width
* @height: height
* Return: integer
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
