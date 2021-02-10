#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* _abs - prints the sign of a number
* @n: number
* Return: success or fail
*/
int _abs(int n)
{
int n;
if (n >= 0)
n = n * 1;
else
n = *(-1);
return (n);
}
