#include "holberton.h"
#include <stddef.h>
/**
* _strchr - that locates a character in a string.
*@s: the string.
*@c: the character.
* Return: the modified string s.
*/
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		return (s);
	}
	return (NULL);
}
