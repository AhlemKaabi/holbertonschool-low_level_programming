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
	unsigned int i, j, L1 = 0, L2 = 0, x, h;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		L1++;
	for (j = 0; s2[j] != '\0'; j++)
		L2++;
	if (n >= L2)
		s = malloc(L1 + L2 + 1 * sizeof(char));
	if (n < L2)
		s = malloc(L1 + n + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	x = 0;
	while (s1[x] != '\0')
	{
		s[x] = s1[x];
		x++;
	}
	h = 0;
	while (s2[h] != '\0' && h < n)
	{
		s[L1 + h] = s2[h];
		h++;
	}
	s[L1 + h] = '\0';
	return (s);
}
