#include "holberton.h"
/**
* puts_half - function that prints half of a string.
* @str: pointer to a string.
*/
void puts_half(char *str)
{
	int i, j, n, length_of_the_string;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
		length_of_the_string = i;
	}
	n = (length_of_the_string - 1) / 2;

	for (j = n + 1; j <= length_of_the_string - 1; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
