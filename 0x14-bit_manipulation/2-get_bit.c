#include <stdio.h>
#include "holberton.h"
/**
* get_bit - ffunction that returns the value of a bit at a given index.
*@n: the number
*@index: the given index
* Return: Always 0.
*/
int get_bit(unsigned long int n, unsigned int index)
{
		if (index >= (sizeof(unsigned long int)) * 8)
		{
			return (-1);
		}
		return ((n >> index) & 1);
}
