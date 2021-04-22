# include "holberton.h"
/**
* _strncat - function that concatenates two strings
* it will use at most n bytes from src.
* @n: number of bytes to copy
* @dest: the destination string
* @src: the source string
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	i = 0;
	while (*src != '\0' && i <= n - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (p);
}
