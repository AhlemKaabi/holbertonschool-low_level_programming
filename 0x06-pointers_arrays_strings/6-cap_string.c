# include "holberton.h"
#include <stdio.h>
/**
* cap_string - function that capitalizes all words of a string.
* @ch: the string to capitalize
* Return: string
*/
char *cap_string(char *ch)
{
	int i;

	for (i = 0 ; ch[i] != '\0'; i++)
	{
		if (*(ch + 0) >= 'a' && *(ch + 0) <= 'z')
			*ch = *ch - 32;
			/*printf(" ch is : %c\n" , *(ch + 0));*/
		if (*(ch + i) == ' ' || *(ch + i) == '\n' || *(ch + i) == ','
		|| *(ch + i) == ';' || *(ch + i) == '.' || *(ch + i) == '?' ||
		*(ch + i) == '"' || *(ch + i) == '(' || *(ch + i) == ')' ||
		*(ch + i) == '{' || *(ch + i) == '}' || *(ch + i) == '\t')
		{
			if (*(ch + i + 1) >= 'a' && *(ch + i + 1) <= 'z')
			{
				*(ch + i + 1) = *(ch + i + 1) - 32;
			}
		/*printf(" chpart2 is : %c\n" , *(ch + i));*/
		}
	}
	return (ch);
}
