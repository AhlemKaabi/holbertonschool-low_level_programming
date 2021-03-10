#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* print_name - function that prints name!
* @name: is a pointer to the name that will be print
* @f: the function pointer that in the main code will point to
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
