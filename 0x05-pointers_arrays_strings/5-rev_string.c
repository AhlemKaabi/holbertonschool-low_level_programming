#include "holberton.h"
/**
* rev_string - function that reverse a string
*@s: parameter pointer
*/
void rev_string(char *s)
{
	int i, j, x;
	char tmp;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
		x = i;
	}
	for (j = 0; j <= (x - 1) / 2; j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + x - 1 - j);
		*(s + x - 1 - j) = tmp;
	}
}
