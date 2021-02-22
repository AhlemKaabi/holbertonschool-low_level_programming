#include "holberton.h"
/**
* _memcpy - function that cpoies memory aera.
*@dest: the destination string, the output
*@src: the source stirng, the input.
*@n: the numbers of bytes to copy.
* Return: the modified string dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j, i;

	for (i = 0; dest[i] == '\0'; i++)
	{
		for (j = 0; j <= n; j++)
		{
			dest[j] = src[j];
		}
		break;
	}
	return (dest);
}
