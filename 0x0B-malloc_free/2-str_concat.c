#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* str_concat - function that concatenates two strings
* @s1: the first string.
* @s2: the second string.
* Return: string
*/
char *str_concat(char *s1, char *s2)
{
	int tot_length, i, j, L1 = 0, L2 = 0, x, h;
	char *s_concat;

	for (i = 0; s1[i] != '\0'; i++)
	{
		L1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		L2++;
	}
	tot_length = L1 + L2;
	s_concat = (char *) malloc(tot_length + 2 * sizeof(char));
	if (s_concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; s1[x] != '\0'; x++)
		{
			s_concat[x] = s1[x];
		}
		for (h = 0; s2[h] != '\0'; h++)
		{
			s_concat[L1 + h] = s2[h];
		}
		return (s_concat);
	}
}
