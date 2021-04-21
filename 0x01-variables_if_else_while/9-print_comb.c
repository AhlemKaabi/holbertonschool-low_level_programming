#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* all possible combinations of single-digit numbers.
* Return: success
*/

int main(void)
{
	int i, j;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		for (j = 0 ; ((j < 1) && (i < 57)); j++)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
