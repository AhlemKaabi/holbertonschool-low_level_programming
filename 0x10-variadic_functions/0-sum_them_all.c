#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: numbers
 * Return: sum 
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0; /*intialize the s !!!*/
	unsigned int i;
	va_list ptr; /*pointer to the first argument*/

	va_start(ptr, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		s = s + va_arg(ptr, int); /*call to the optional argument*/
	va_end(ptr);
	return (s);
}
