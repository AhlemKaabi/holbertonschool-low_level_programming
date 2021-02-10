#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - prints last digit
* @n: parameter
* Return: success
*/
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("98\n");
	}
	else if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			printf("%d, ", i);
			else
			printf("%d\n", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			printf("%d, ", i);
			else
			printf("%d\n", i);
		}
	}
}
