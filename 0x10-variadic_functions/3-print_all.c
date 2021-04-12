#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - print everything
 *@format: format of arguments
 *
 * Return: successful.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char c, *ch, *separator = "";

	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				separator = ", ";
				break;
			case 's':
				ch = va_arg(ap, char *);
				if (!ch)
					ch = "(nil)";
				printf("%s%s", separator, ch);
				separator = ", ";
				break;
		}
	i++;
	}
	printf("\n");

	va_end(ap);
}
