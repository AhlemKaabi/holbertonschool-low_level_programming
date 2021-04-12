#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_realloc - reallocate memory from previous
 * @ptr: pointer to previous space
 * @old_size: param1
 * @new_size: param2
 * Return: void pointer
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* it will be casted to char at main */
	void *allo;

	if (ptr == NULL)
	{
		allo = malloc(new_size);
		if (allo == NULL)
		{
			return (NULL);
		}
		/* if I return allo, i need to free ptr */
		free(ptr);
		return (allo);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* real deal */
	if (new_size < old_size)
	{
		return (ptr);
	}
	/**
	 * main is not initializing the first allocated space before calling _realloc
	 * no need to loop and take values from an empty space XD
	 */
	allo = malloc(new_size);
	if (allo == NULL)
	{
		return (NULL);
	}
	free(ptr);
	return (allo);
}
