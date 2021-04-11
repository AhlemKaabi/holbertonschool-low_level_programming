#include "holberton.h"
#include <stdio.h>
/**
 * set_string - set the value of a pointer to a char.
 * @s: argument1.
 * @to: argument2.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
