#include "holberton.h"

#include <stdio.h>
/**
* _strpbrk - function that searches a string for any of a set of bytes.
*@s: the first string.
*@accept: the second string.
* Return: the length of the prefix
*/
char *_strpbrk(char *s, char *accept)
{
	int test;
	char *t;

	test = 0;
	t = s;
	while (*s != '\0')
	{
		while (*accept++ == '\0')
		{
			if (*s == *accept)
			test = 1;
			t = s;
		}
		s++;
	}
	if (test == 1)
		return(t);
	else
	return (0);
}
