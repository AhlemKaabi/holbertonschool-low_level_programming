#include "holberton.h"
#include <stdio.h>
/**
* print_array - function that prints n elements of the array.
*@a: pointer to array
*@n: parameter
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n-1; i++)
	{
		if ( i != n-1)
		{
			printf("%d, ", a[i]);
		}
		else
		printf("%d", a[i]);
	}
	printf("\n");
}