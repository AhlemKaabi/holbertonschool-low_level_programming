#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - find the 1st occurence of the substring needle in haystack.
 * @haystack: string.
 * @needle: substring to look for.
 * Return: pointer to the beginning of the located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int length_needle = 0, i, j;
	/* get the length of the needle string */
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (needle[length_needle] != '\0')
	{
		length_needle++;
	}
	i = 0;
	while (haystack[i] != '\0')
	{	/* if a char from haystack match the first char of needle */
		if (haystack[i] == needle[0])
		{	/* i is fixed cuz that's where to return */
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				j++;
			}
			/* j matched all chars in needle and haystack */
			if (j == length_needle)
			{
				return (haystack + i);
			}
		}
	i++;
	}
return (0);
}
