# include "holberton.h"
/**
* _strcat - function
*@dest: para
*@src: para
* Return: string
*/
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p);
}
