#include "holberton.h"
/**
* print_numbers - funtion that print numbers from 0 to 9
* Return: success or fail
*/
int print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}