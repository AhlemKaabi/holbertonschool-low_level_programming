#include "holberton.h"
/**
 *print_number - function that prints integer.
 *@n: number to print.
 */
void print_number(int n)
{
	int i, j, f = 1, aux, print = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n > 0)
	{
		aux = n;
		if ((n / 10) != 0)
		{
			i = 0;
			while (aux > 0)
			{
				aux = aux / 10;
				i++;
			}
			for (j = 0; j <= (i - 2); j++)
			{
				f = f * 10;
			}
			while (f > 1)
			{
				print = n / f;
				_putchar(print + '0');
				n = n % f;
				f = f / 10;
			}
		}
	}
	if ((n / 10) == 0)
	{
		_putchar(n + '0');
	}
}
