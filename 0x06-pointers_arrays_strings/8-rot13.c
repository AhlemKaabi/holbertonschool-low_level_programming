# include "holberton.h"
/**
* rot13 - function
*@ch: para
* Return: string
*/
char *rot13(char *ch)
{
	int i, j;

	char s[] = "anANboBOcpCPdqDQerERfsFSgtGThuHUivIVjwJWkxKXlyLYmzMZnaNAobOBpcPCqdQDreREsfSFtgTGuhUHviVIwjWJxkXKylYLzmZM";

	for (i = 0 ; ch[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j= j +2)
		{
			if (ch[i] == s[j])
			{
				ch[i] = s[j + 1];
				break;
			}
		}
	}
	return (ch);
}
