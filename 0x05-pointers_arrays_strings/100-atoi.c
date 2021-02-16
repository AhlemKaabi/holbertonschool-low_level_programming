#include "holberton.h"
#include <stdio.h>
/**
* _atoi - function that convert a string to an integer.
*@s: the string
* Return: the integer
*/
int _atoi(char *s)
{
	int i, j, res, sign;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	sign = 1;
	res = 0;
	for (j = 0; j < i; j++)
	{
		if (*(s + j) >= '0' && *(s + j) <= '9')
		{
			res = res * 10 + s[j] - '0';
		}
		else
		{
			res = res + 0;
		}
		if (*(s + j - 1) == '-')
		{
			sign = -1;
		}
	}

return (sign * res);
}
