#include "holberton.h"
/**
* print_last_digit - prints last digit of a number.
* @n: parameter
* Return: success
*/
int print_last_digit(int n)
{	
	int r;

	r = n % 10;
	if (n < 0)
	{
		r = -r;
	}
	_putchar(r + '0');
	return (r);
}
