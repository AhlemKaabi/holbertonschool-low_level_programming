# include "holberton.h"
/**
* _strncat - function
*@n: para
*@dest: para
*@src: para
* Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
char *p = dest;

while (*dest != '\0')
{
dest++;
}
i = 0;
while (*src != '\0' && i <= n - 1)
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return (p);
}
