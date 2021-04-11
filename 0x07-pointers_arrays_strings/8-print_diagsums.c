#include <stdio.h>
/**
* print_diagsums - print sum.
* @a: argument1
* @size: argument2
* Return: void.
*/
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + size * i + i);
		sum2 = sum2 + *(a + i * size + size - 1 - i);
	}
	printf("%i, %i\n", sum1, sum2);
}
