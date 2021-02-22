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
	int i;

	if (s == NULL)
	return (NULL);
	for (i = 0; *(s + i) != '\0'; i++)
	{
		s++;
		if (*(s + i) == c)
		return (s);
	}
	return (NULL);
}
