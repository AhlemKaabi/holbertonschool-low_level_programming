#include <stdio.h>
/**
* print_diagsums - print sum.
* @a: argument1
* @size: argument2
* Return: void.
*/
void print_diagsums(int *a, int size)
{
	int res1 = 0, res2 = 0, i;

	for (i = 0; i <= size; i++)
	{
		res1 = res1 + a[i];
		res2 = res2 + a[size - i - 1];
	}
	printf("%d, %d\n", res1, res2);
}