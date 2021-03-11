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
	unsigned int i;
	va_list ptr; /*pointer to the first argument*/

	if (n != 0)
	{
		va_start(ptr, n);
		if (separator == NULL)
		{
			for (i = 0; i < n; i++)
			{
				if (va_arg(ptr, char *) == 0)
				{
					printf("(nil)");
					printf("test1");
				}
					
				else
				{
					printf("%s", va_arg(ptr, char *));
					printf("test2");
				}
					
			}
		}
		else
		{
			for (i = 0; i < n - 1; i++)
			{
				if (va_arg(ptr, char *) == 0)
				{
					printf("(nil)%s", separator);
					printf("test3");
				}
					
				else
				{
					printf("%s%s", va_arg(ptr, char *), separator);
					printf("test4");
					/* 'char*' is the expected arg type ! */
				}
			}
			if (va_arg(ptr, char *) == 0)
			{
				printf("(nil)");
				printf("test5");
			}
			else
			{
				printf("%s", va_arg(ptr, char *));
				printf("test6");

			}
		}
	}
	printf("\n");
	printf("test7");
	va_end(ptr);
}
