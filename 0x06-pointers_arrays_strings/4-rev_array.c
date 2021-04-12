#include "holberton.h"
#include <stdio.h>
/**
* reverse_array - copie n bytes of a string
* @a: The destination string
* @n: source string.
* Return: void.
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
