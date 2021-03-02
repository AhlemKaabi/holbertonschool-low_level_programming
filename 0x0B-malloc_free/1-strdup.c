#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
* _strdup - fuction that returns a pointer to a newly
* allocated space in memory, which contains a copy of
* a string given as parameter.
* @str: the given string.
* Return: a copy of the given string
*/
char *_strdup(char *str)
{
	int length = 0;
	char *str_copy;
	int i, j;

	for (i = 0; str[i] == '\0'; i++)
	{
		length++;
	}
	str_copy = (char *)malloc(length * sizeof(char));
	if (str_copy == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 1; j <= length; j++)
		{
			str_copy[j] = str[j];
		}
		return (str_copy);
	}
}
