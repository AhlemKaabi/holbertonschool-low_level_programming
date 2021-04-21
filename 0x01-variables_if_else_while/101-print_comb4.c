#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* all possible different combinations of three digits.
* Return: success
*/

int main(void)
{
	int i;

	for (i = 1; i < 800 ; i++)
	{

		if (((i % 10) > ((i % 100)/ 10)) && (((i % 100)/ 10) > (i / 100)))
		{
			putchar((i / 100) + '0');
			putchar(((i % 100)/ 10) + '0');
			putchar((i % 10) + '0');
			if ((i / 100) != 7)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	printf("\n");
	return (0);
}
