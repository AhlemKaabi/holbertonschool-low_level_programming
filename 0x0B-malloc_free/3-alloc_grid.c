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
	int i, h, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int *)); /* integer array */
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (l = 0; l < i; l++)
			{
				free(ar[l]);
			}
			free(ar);
			return (NULL);
		}
		for (h = 0; h < width; h++)
		{
			ar[i][h] = 0;
		}
	}
	return (ar);
}
