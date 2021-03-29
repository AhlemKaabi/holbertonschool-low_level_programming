#include <stdio.h>
#include "holberton.h"
/**
* print_binary - print binary.
*@n: the input number to print in binary 
*/
void print_binary(unsigned long int n)
{
	unsigned long int length = 0, i, x, bit;

	if (n == 0)
		_putchar('0');
	x = n;
	while (x > 0)
	{
		x = x >> 1;
		length++;
	}
	i = 0;
	while ((length - i) > 0)
	{
		bit = n & (1 << (length - 1 - i));
		if (bit == 0)
			_putchar('0');
		else
			_putchar('0' + 1);
		i++;
	}
}	

