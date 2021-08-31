#include "search_algos.h"
/**
  * binary_search - ffunction that searches for a value in a sorted array
  * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of lelements in array
 * @value: the value to search
 * Return: first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	/**
	 * You can assume that array will be sorted in ascending order
	 * You can assume that value won’t appear more than once in array
	 */
	size_t l = 0, r = size - 1;
	size_t m, i;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r ; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[r]);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			/*return the index*/
			return (m);
		}
	}
	return (-1);
}
