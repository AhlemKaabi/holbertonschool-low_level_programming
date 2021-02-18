# include "holberton.h"
#include <stdio.h>
/**
* string_toupper - function
*@ch: para
* Return: string
*/
char *string_toupper(char *ch)
{
	int i;

	for (i = 0 ; ch[i] != '\0'; i++)
	{
		if (*(ch + i) >= 'a' && *(ch + i) <= 'z')
		{
			/*printf(" ch befor: %c\n" , *(ch + i));*/
			*(ch + i) = *(ch + i) - 32;
		}
		/*printf(" ch after : %c\n" , *(ch + i));*/
	}
	return (ch);
}
