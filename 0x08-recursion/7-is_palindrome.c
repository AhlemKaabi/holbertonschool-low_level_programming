#include "holberton.h"
/**
*
*/
int check(char *s, int i)
{
	if (*s != *(s + i))
	{
		return (0);
	}
	if (i > i /2)
	{
		if (*s == *(s + i))
			return (check(s++, i - 1));
		else
			return(0);
	}
	if (i == i/2 )
		return (1);
}
int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	
	return(i);
}

int is_palindrome(char *s)
{
	int len;
	if (*s == '\0')
	{
		return(1);
	}
	if (*s != '\0')
	{
		len = _strlen_recursion(s);
	}
	return(check(s , len));
}
