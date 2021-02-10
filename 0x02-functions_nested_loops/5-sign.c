#include "holberton.h"
/**
* print_sign - prints thesign of a number
* @n: parameter
* Return: success or fail
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if(n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
