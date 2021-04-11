#include "holberton.h"
#include <stdio.h>
/**
* _strpbrk - fills memory with a constant byte.
* @s: the memory area to print in
* @accept: the memore to copy from
* Return: r.
*/

char *_strpbrk(char *s, char *accept)
{	int i, j;
	int found = 0;

	for (i = 0; *(s + i) && found == 0; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				found = 1;
				break;
			}
		}
	}
	if (found == 1)
	{
		while (i > 1)
		{
			s++;
			i--;
		}
			return (s);
		}
	else
	{
		return (0);
	}
}
