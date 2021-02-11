#include "holberton.h"
/**
* print_line - funtion that print lines
* @n: parameter
* Return: success or fail
*/
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
