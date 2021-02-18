# include "holberton.h"
/**
* leet - function
*@ch: para
* Return: string
*/
char *leet(char *ch)
{
	int i, j;

	char s[] = "aA4eE3oO0tT7lL1";

	for (i = 0 ; ch[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j = j + 3)
		{
			if (ch[i] == s[j] || ch[i] == s[j + 1])
			{
				ch[i] = s[j + 2];
			}
		}
	}
	return (ch);
}
