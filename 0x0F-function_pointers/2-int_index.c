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
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
