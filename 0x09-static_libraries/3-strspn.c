#include "holberton.h"
/**
* _strspn - function that gets the length of a prefix substring.
*@s: the first string.
*@accept: the second string.
* Return: the length of the prefix
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p++;
				break;
			}
		}
		if (s[i] != accept[j])
		break;
	}
	return (p);
}
