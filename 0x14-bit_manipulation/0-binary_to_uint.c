#include <stdio.h>
#include "holberton.h"
/**
* binary_to_uint - function that converts a binary number to an unsigned int.
*@b: is pointing to a string of 1 and 0 chars.
* Return: Always 0.
*/
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0, j = 0;
	unsigned int unit = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}
	len = len - 1;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			unit = unit + (1 << j);
		}
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		len--;
		j++;
	}
	return (unit);
}
