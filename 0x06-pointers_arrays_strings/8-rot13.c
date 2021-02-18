# include "holberton.h"
/**
* rot13 - function
*@ch: para
* Return: string
*/
char *rot13(char *ch)
{
	int i, j;

	char s1[] = "aAbBcCdDeEfFgGhiIjJkKlLmM";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZ";

	for (i = 0 ; ch[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0' || S2[j] != '\0'; j++)
		{
			if (ch[i] == s1[j] || ch[i] == s2[j])
			{
				ch[i] = s1[j];
			}
		}
	}
	return (ch);
}
