#include "search_algos.h"
/**
 * linear_search - function that search for aa value in an array
 * of integers using the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of lelements in array
 * @value: the value to search
 * Return: first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
