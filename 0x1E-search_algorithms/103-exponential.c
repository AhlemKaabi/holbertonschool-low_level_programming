#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of lelements in array
 * @value: the value to search
 * Return: first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t range = 1, low, high, count, mid;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%i]\n", array[0]);
		return (0); }
	while (range < size && array[range] < value)
	{
		printf("Value checked array[%li] = [%i]\n", range, array[range]);
		range *= 2; }
	low = range / 2;
	if (range >= size - 1)
	{
		high = size  - 1;
		printf("0000Value found between indexes [%li] and [%li]\n", low, high);
	}
	else
	{
		high = range;
		printf("Value found between indexes [%li] and [%li]\n", low, range);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		for (count = low; count < high; count++)
		{
			printf("%i, ", array[count]);
		}
		printf("%i\n", array[high]);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
