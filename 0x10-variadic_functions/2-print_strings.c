#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_strings - function that prints numbers.
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function.
 * Return: viod
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list ptr; /*pointer to the first argument*/

	va_start(ptr, n);
	s = va_arg(ptr, char*);
	if (n != 0)
	{
		if (separator == NULL)
		{
			for (i = 0; i < n; i++)
			{
				if (s == NULL)
				{
					printf("(nil)");
				}
					
				else
				{
					printf("%s", s);
				}
					
			}
		}
		else
		{
			for (i = 0; i < n - 1; i++)
			{
				if (s == NULL)
				{
					printf("(nil)%s", separator);
				}
					
				else
				{
					printf("%s%s", s, separator);
					/* 'char*' is the expected arg type ! */
				}
			}
			s = va_arg(ptr, char*);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);

			}
		}
	}
	printf("\n");
	va_end(ptr);
}
