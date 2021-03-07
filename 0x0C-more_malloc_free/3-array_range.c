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
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= (max - min); i++)
		arr[i] = i;
	return (arr);
}
