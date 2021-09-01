#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of lelements in array
 * @value: the value to search
 * Return: first index where value is located or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	/**
	 * You can assume that array will be sorted in ascending order
	 */
	size_t pos, low, high;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;
	pos = low +
	(((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));
	while (pos <= size - 1 && array[pos] != value)
	{
		if (array[pos] > value)
		{
			printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
			high = pos - 1;
			pos = low +
			(((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		}
		if (array[pos] < value)
		{
			printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
			low = pos + 1;
			pos = low +
			(((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		}
	}
	if (pos <= size - 1 && array[pos] == value)
	{
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		return (pos);
	}
	printf("Value checked array[%li] is out of range\n", pos);
	return (-1);
}
