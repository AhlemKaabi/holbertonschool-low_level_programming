#include "holberton.h"
/**
* rev_string - function that reverse a string
*@s: parameter pointer
*/
void rev_string(char *s)
{
	int i, j, x;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		x = i;
	}
	for (j = 0; j <= x; j++)
		s[j] = s[ (x - 1) - j];
}
