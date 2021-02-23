#include "holberton.h"
#include <stddef.h>
/**
* _strpbrk - function that searches a string for any of a set of bytes.
*@s: the first string.
*@accept: the second string.
* Return: the length of the prefix
*/
char *_strpbrk(char *s, char *accept)
{ 
	char *t;
	t = s;
	while(*s != '\0')
	{
		while(*accept++ != '\0')
		{
			if (*s == *accept)
			t = s;
			break;

		}
			
		s++;
	}
	return (t);
}
