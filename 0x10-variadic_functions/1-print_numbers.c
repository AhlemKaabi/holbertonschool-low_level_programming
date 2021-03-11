#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_numbers - function that prints numbers.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function.
 * Return: viod
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr; /*pointer to the first argument*/
	if (n != 0)
	{
		va_start(ptr, n);
		if (separator == NULL)
		{
			for (i = 0; i < n; i++)
			{
				printf("%i", va_arg(ptr, int));
			}
		}
		else
		{
			for (i = 0; i < n - 1; i++)
				printf("%i%s", va_arg(ptr, int), separator);
			printf("%i", va_arg(ptr, int));
		}
	}
	printf("\n");
	va_end(ptr);
}
