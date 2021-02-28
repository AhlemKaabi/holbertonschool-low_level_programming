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
	int  i, j, match;
	
	match = 0;
	
	if (*accept == '\0')
	{
		return (0);
	}
	else 
	{
	while (s[j] != '\0')
	{	
		i = 0;
		match = 0;
		while (accept[i] != '\0' && match == 0)
		{
			if (s[j] == accept[i])
			{
			match = 1;
			}
			i++;
		}
		 j++;
	}
	}
	if (match == 1)
	{
		return (s + j);
	}
	else
	{
		return (0);
	}
}
