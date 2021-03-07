#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* array_range - function that creates an array of integers.
* @min: the min
* @max: the max
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *arr, i, memo;

	if (min > max)
		return (NULL);
	
	if ((max - min +1) < 0)
		memo = (-1) * (max - min + 1);
	if ((max - min +1) >= 0)
		memo = (max - min + 1);
	arr = malloc(memo * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= memo; i++)
	{
		arr[i] = min +i;
	}
	return (arr);
}
