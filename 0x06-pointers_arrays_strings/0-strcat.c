# include "holberton.h"
/**
* _strcat - function that concatenates two strings.
* @dest: the destination string
* @src: the source string
* Return: the destination string modified
*/
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
