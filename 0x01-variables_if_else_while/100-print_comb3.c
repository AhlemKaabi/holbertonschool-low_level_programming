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

	for (i = 0; i < 100 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		for (j = 0 ; ((j < 1) && (i < 99)); j++)
		{
			putchar(44);
			putchar(32);
		}
	}
	printf("\n");
	return (0);
}
