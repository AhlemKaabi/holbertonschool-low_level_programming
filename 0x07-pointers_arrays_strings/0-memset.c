#include "holberton.h"
/**
* _memset - function that fills memory with a constant byte.
*@b: character
*@n: the number of bytes to be changed
*@s: the string
* Return: the modified string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

		for (j = 0; j < n; j++)
		{
			*(s + j) = b;
		}
	return (s);
}
