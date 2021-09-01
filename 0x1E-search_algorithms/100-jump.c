#include "search_algos.h"
#include <math.h>

/**
	* jump_search - function that searches for a value in a sorted array
	* of integers using the Jump search algorithm
	* @array: a pointer to the first element of the array to search in
	* @size: the number of lelements in array
	* @value: the value to search
	* Return: first index where value is located or -1
	*/
int jump_search(int *array, size_t size, int value)
{
	/**
	 * You can assume that array will be sorted in ascending order
	 */
	size_t x;
	size_t start = 0;
	size_t step = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		start = step;
		step += sqrt(size);
	}
	printf("Value found between indexes [%li] and [%li]\n", start, step);
	for (x = start; x <= step; x++)
	{
		printf("Value checked array[%li] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
		if (x >= size - 1)
		{
			return (-1);
		}
	}
	return (-1);
}
