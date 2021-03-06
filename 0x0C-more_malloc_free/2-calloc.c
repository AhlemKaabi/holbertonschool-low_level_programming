#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
* _calloc - function that allocates memory
* for an array, using malloc.
* @nmemb: the number of elements
* @size: the size of each element
* Return: no return
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
