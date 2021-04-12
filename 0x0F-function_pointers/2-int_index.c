#include <stddef.h>
#include "function_pointers.h"
/**
* int_index - function that searches for an integer.
* @array: is a pointer to the array
* @size: is the size of the array
* @cmp: is the function pointer to point to
* Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		check = (*cmp)(*(array + i));
		if (check == 1)
		{
			return (i);
		}
	}
	return (-1);
}

