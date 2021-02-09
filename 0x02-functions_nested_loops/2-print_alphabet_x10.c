#include "holberton.h"
/**
* main - entry point
* prints 10 decimal numbers
* Return: success
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 10; i++)
{
print_alphabet();
_putchar('\n');
}
}
