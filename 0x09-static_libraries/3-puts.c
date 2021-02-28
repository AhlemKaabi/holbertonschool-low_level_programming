#include "holberton.h"
/**
* _puts - function
* @s : string
* Return: void
*/
void _puts(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		_putchar(*(s + i));
		i = i + 1;
	}
	_putchar('\n');
}
