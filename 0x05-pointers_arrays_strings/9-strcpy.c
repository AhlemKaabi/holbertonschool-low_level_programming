#include "holberton.h"
/**
* _strcpy - function that copies a string pointed to by src.
*@dest: pointed to string
*@src: pointing by strinng
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src+ i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
