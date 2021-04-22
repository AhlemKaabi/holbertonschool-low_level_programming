# include "holberton.h"
/**
* rot13 - function that encodes a string using rot13.
* @ch: the stirng to encode
* Return: string
*/
char *rot13(char *ch)
{
	int i, j;

	char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; (ch[i] != '\0'); i++)
	{
		for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
		{
			if (ch[i] == s1[j])
			{
				ch[i] = s2[j];
				break;
			}
		}
	}
	return (ch);
}
