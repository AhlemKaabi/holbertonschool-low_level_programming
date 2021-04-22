#include "holberton.h"
/**
* swap_int - function that swap the values of two integers.
* @a: pointer parameter
* @b: pointer parameter
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
