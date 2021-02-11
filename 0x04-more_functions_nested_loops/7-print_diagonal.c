#include "holberton.h"
/**
* print_diagonal - funtion that prints diagonal
* @n: parameter
* Return: success or fail
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= i - 1; j++)
			{
			_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
