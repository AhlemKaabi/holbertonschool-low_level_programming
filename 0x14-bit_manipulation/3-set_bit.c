#include <stdio.h>
#include "holberton.h"
/**
* set_bit - function that sets the value of a bit to 1 at a given index.
*@n: the number
*@index: the given index
* Return: Always 0.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)) * 8)
	{
		return (-1);
	}
	*n = (1 << index) | *n;
	return (1);
}
