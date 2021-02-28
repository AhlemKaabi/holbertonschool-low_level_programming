#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 *@s: parameter pointer var
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
