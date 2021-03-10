#include <stddef.h>
#include "function_pointers.h"
/**
* array_iterator - unction that executes a function given as a parameter
* on each element of an array.
* @array: is a pointer to the array
* @size: is the size of the array
* @action: is the function pointer to point to
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
		/*call-back function that (action) points to*/
}
