# include "holberton.h"
/**
* reverse_array - function
*@a: para
*@n: para
*/
void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0 ; i <= (n - 1) / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}
