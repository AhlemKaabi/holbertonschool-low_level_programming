#include "holberton.h"
#include <stdio.h>
/**
* _strpbrk - finds the first character in
* the string s that matches any character specified in accept.
* @s: string to be scanned
* @accept: string containing the character to mach.
* Return: a pointer to the character in s that matches one
* of the characters in accept, else returns NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int found = 0;

	for (i = 0; s[i] && found == 0; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
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
		return (NULL);
	}
}
