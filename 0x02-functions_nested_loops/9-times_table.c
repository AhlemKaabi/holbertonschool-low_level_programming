#include "holberton.h"
/**
* times_table - function that prints the 9 times table, starting with 0.
* Return: success
*/
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x < 10)
			{
				if (j != 9)
				{
					_putchar((x % 10) + '0');
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar((x % 10) + '0');
				}

			}
			else
			{
				if (j != 9)
				{
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
					_putchar(44);
					_putchar(32);
				}
				else
				{
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
