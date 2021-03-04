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
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, h;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	ar = (int *)malloc(height * sizeof(int *)); /* integer array */
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = (int )malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			return (NULL);
		}
		for (h = 0; h < width; h++)
			ar[i][h] = 0;
	}
	return (ar);
}
