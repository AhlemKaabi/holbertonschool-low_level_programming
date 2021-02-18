# include "holberton.h"
/**
* _strncpy - function
*@n: para
*@dest: para
*@src: para
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
