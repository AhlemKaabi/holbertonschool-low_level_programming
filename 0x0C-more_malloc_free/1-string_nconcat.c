#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* string_nconcat - function that concatenates two strings
* @s1: the first string.
* @s2: the second string.
* @n: int
* Return: string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int tot_length = 0, i, j, L1 = 0, L2 = 0, x, h;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		L1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		L2++;
	}
	tot_length = L1 + n;
	s = malloc(tot_length + 1 * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		s[x] = s1[x];
	}
	for (h = 0; h <= n ; h++)
	{
		s[L1 + h] = s2[h];
	}
	s[L1 + h] = '\0';
	return (s);
}
