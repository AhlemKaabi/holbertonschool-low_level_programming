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
	size_t x, start = 0, step = 0;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%ld] = [%i]\n", start, array[start]);
		start = step; /*conserve the start of the block */
		step += sqrt(size); /* prepare to the next block*/
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, step);
	for (x = start; x < size; x++)
	{
		printf("Value checked array[%ld] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
