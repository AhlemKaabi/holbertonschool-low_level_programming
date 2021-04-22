#include "holberton.h"
/**
* _strcpy - function that copies a string pointed to by src.
* @dest: pointer to the destination string
* @src: pointer to the source strinng
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0;  j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
