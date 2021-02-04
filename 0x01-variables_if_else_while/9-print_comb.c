#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* prints 10 decimal numbers
* Return: success
*/

int main(void)
{
int i, j;
for (i = 48 ; i < 57 ; i++)
{
putchar(i);
for (j = 0 ; j < 1; j++)
{
putchar(44);
putchar(32);
}
}
putchar(57);
return (0);
}
