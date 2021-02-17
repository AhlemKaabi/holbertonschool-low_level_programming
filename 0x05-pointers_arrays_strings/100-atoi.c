#include "holberton.h"
#include <stdio.h>
/**
* _atoi - function that convert a string to an integer.
*@s: the string
* Return: the integer
*/
int _atoi(char *s)
{
	unsigned int init, k, sign = 1, is_a_number, begin_of_number, res = 0;

	begin_of_number = 0;
	is_a_number = 0;
	k = 0;
	if (*s == '\0')
	{
		return (res);
	}
	else
	{
	while (is_a_number == 0)
	{
		if ((*(s + k) >= '0' && *(s + k) <= '9'))
		{
			is_a_number = 1;
			begin_of_number = k;
		}
		if (*(s + k) == '-')
		{
			sign = sign * -1;
			k = k + 1;
		}
		else
		k = k + 1;
	}
	init = begin_of_number;
	k = k - 1;
	while (s[init] >= '0' && s[init] <= '9')
	{
		res = res * 10 + s[init] - '0';
		init++;
	}
	if (*(s + k) == '-')
	{
		sign = -1;
	}
	return (sign * res);
	}
}
