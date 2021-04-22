# include "holberton.h"
/**
* _strncpy - function that copies a string.
*@n: the bytes to copy
*@dest: the destination string
*@src: the source string
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int j;

	j = 0;
	while (*src != '\0' && j < n)
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	while (j < n)
	{
		*dest++ = '\0';
		j++;
	}
	return (p);
}
