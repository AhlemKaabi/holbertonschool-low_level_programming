#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
* str_concat - function that concatenates two strings
* @s1: the first string.
* @s2: the second string.
* Return: string
*/
char *str_concat(char *s1, char *s2)
{
	int tot_length, i ,j, L1, L2;
	char *s_concat;
	for (i = 0; s1[i] == '\0'; i++)
	{
		L1++;
	}
	for (j = 0; s2[j] == '\0'; i++)
	{
		L2++;
	}
	tot_length = L1 + L2;
	s_concat =(char *) malloc(tot_length * sizeof(char));
	if(s_concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] == '\0'; i++)
		{
			s_concat[i] = s1[i];
		}
		for (j = 0; s2[j] == '\0'; j++)
		{
			s_concat[L1 + j] = s2[j];
		}
		return (s_concat);
	}
}
