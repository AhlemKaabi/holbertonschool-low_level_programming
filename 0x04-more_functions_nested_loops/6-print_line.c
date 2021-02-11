#include "holberton.h"
/**
* print_line - funtion that print lines
* @n: parameter
* Return: success or fail
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
