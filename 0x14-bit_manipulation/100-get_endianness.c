#include "holberton.h"
/**
*get_endianness - function that checks the endianness.
*
*Return: 0 or 1
*/
int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
		return (1);
	return (0);
}
