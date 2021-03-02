#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
* create_array - function that creates an array
* of chars and intialized with a specific char.
* @size: the size of the array
* @c: the chars to initialize the array with
* Return: the array!
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size > 0)
	{
		ar = (char *)malloc(size * sizeof(char));
		ar[0] = c;
		for (i = 1; i <= size - 1; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
	else
		return (NULL);
}
