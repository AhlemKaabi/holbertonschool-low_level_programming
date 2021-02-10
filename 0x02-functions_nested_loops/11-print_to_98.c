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
		printf("98");
	}
	else if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
}
