#include "holberton.h"
#include <stdio.h>
/**
* reverse_array - unction that reverses the content
* of an array of integers.
* @a: The array
* @n: the number of elemenets of the array
*/
void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0; i < n / 2; i++)
	{
		aux = *(a + i);
		*(a + i) = a[n - i - 1];
		a[n - i - 1] = aux;
	}
}
