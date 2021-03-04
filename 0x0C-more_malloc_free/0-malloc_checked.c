#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
* malloc_checked - f function that allocates memory
* using malloc !!
* @b: integer
* Return: a pointer!!
*/
void *malloc_checked(unsigned int b)
{
	void *memory; /*since malloc returns (void *) type*/

	memory = malloc(b); /*allocate a memory */
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory); /*Returns a pointer to the allocated memory*/
}
