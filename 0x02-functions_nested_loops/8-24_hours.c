#include "holberton.h"
/**
 * jack_bauer - function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 * Return: Always 0.
 */
void jack_bauer(void)
{	
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(58);
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
