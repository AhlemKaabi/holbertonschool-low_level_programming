#include "holberton.h"
/**
* print_rev - function that prints a string in revers
*@s: parameter pointer
*/
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
	_putchar(s[j]);
	}
	_putchar('\n');
}
