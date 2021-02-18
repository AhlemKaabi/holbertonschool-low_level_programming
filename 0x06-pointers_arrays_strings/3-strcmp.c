# include "holberton.h"
#include <stdio.h>
/**
* _strcmp - function
*@s1: para
*@s2: para
* Return: string
*/
int _strcmp(char *s1, char *s2)
{
	int i, res = 0;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			res = *(s1 + i) - *(s2 + i);
			/*printf("s1 of is: %c\ns2 of is : %c\n", s1[i] , s2[i]);*/
			break;
		}
		i++;
	}
		return (res);
}
