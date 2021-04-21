#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point
* all possible different combinations of two two-digit numbers.
* Return: success
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 99 ; i++)
	{
		for (j = 1; j < 100; j++)
		{
			if(((i / 10) <= (j / 10)) && ((i % 10) < (j % 10)))
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(32);
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
