#include "holberton.h"
#include <stdio.h>

/**
* _strchr - fills memory with a constant byte.
* @s: the memory area to print in
* @c: the memore to copy from
* Return: result.
*/
char *_strstr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	return (NULL);
}
