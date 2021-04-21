#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* all possible different combinations of two digits.
* Return: success
*/

int main(void)
{
	int i;

	for (i = 1; i < 90 ; i++)
	{

		if ((i % 10) > (i / 10))
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if ((i / 10) != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	printf("\n");
	return (0);
}
